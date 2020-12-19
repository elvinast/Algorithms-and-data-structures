#include <iostream>
#include <stack>
using namespace std;

bool ArePair(char opening, char closing)
{
	if(opening == '(' && closing == ')') return true;
	else if(opening == '{' && closing == '}') return true;
	else if(opening == '[' && closing == ']') return true;
	return false;
}

 bool isValid(string s) {
        stack <char> st;
        int cntclosing = 0, cntopening = 0;
        if (s.length() == 1) return false;
        if (s.length() == 2 and (s[1] != '}' and s[1] != ']' and s[1] != ')')) return false;
        for(int i = 0;i < s.length(); i++){
            if (s[i] == '{' or s[i] == '[' or s[i] == '('){
                 st.push(s[i]);
                 cntopening++;
            }
            else if (s[i] == '}' or s[i] == ']' or s[i] == ')'){
                cntclosing++;
                if (st.empty() or !ArePair(st.top(), s[i])) return false;
                st.pop();
            }
        }
        if (cntclosing != cntopening) return false;
        return true;
    }

int main (){
    string s;
    cin >> s;
    if(isValid(s))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
    return 0;
}
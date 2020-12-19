#include <iostream>
#include <stack>

using namespace std;
bool isLBrace(char s){
    return (s == '[' || s == '(' || s == '{');
}
bool isCorrect(string s){
    stack <char> st;

    int cntOpen = 0, cntClose = 0;
    if ((s[0] == '}' or s[0] == ']' or s[0] == ')') or (s[s.size() - 1] == '{' or s[s.size() - 1] == '[' or s[s.size() - 1] == '(')) return false;
    for(int i = 0; i < s.size(); i++){
        if (s[i] == '{' or s[i] == '[' or s[i] == '('){
            st.push(s[i]);
            cntOpen++;
        }
        else if (s[i] == '}' or s[i] == ']' or s[i] == ')'){
            cntClose++;
            if (cntClose > cntOpen) return false;
            if (s[i] == ')' and st.top() != '(') return false;
            else if (s[i] == '}' and st.top() != '{') return false;
            else if (s[i] == ']' and st.top() != '[') return false;
            st.pop();
        }
    }
    if (cntOpen != cntClose or !st.empty()) return false;
    return true;
}

int main(){
    string s;
    cin >> s;
    if (isCorrect(s)) cout << "yes" << endl;
    else cout << "no" << endl;
    return 0;
}
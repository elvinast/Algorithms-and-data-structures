//------------------
#include <iostream>
#include <stack>
using namespace std;
int main(){
    string s;
    int res;
    getline(cin, s);
    stack <int> st;
    for(int i = 0; i < s.size(); i++){
        if (s[i] != ' '){
            if (s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i] == '/'){
                int b = st.top();
                st.pop();
                int a = st.top();
                st.pop();
                if (s[i] == '+') res = a + b;
                else if (s[i] == '-') res = a - b; 
                else if (s[i] == '*') res = a * b;
                else if (s[i] == '/') res = a / b;
                st.push(res);
            }
            if (s[i] >= '0' and s[i] <= '9'){ //is number
                st.push(s[i] - '0');
            }
        }
    }
    cout << res << endl;
    return 0;
}
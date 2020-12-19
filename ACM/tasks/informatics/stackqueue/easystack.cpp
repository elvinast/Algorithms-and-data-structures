#include <iostream>
#include <stack>
using namespace std;

void clear(stack<int> &st ){
   stack<int> empty;
   swap(st, empty );
}

int main(){
    stack<int> st;
    while (true){
        string s;
        cin >> s;
        if (s == "size") cout << st.size() << endl;
        else if (s == "clear"){
            clear(st);
            cout << "ok" << endl;
        }
        else if (s == "back"){
            if (st.size() == 0) cout << "error" << endl;
            else cout << st.top() << endl;
        }
        else if (s == "pop"){
            if (st.size() == 0) cout << "error" << endl;
            else {
                cout << st.top() << endl; 
                st.pop();
            }
        }
        else if (s == "exit"){
            cout << "bye" << endl;
            return 0;
        }
        else if (s == "push"){
            int x;
            cin >> x;
            st.push(x);
            cout << "ok" << endl;
        }

        
    }
    return 0;
}

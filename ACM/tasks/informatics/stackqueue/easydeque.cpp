#include <deque>
#include <iostream>
using namespace std;

void clear(deque<int> &q ){
   deque<int> empty;
   swap(q, empty );
}

int main(){
    deque<int> q;
    while (true){
        string s;
        cin >> s;
        if (s == "size") cout << q.size() << endl;
        else if (s == "exit"){
            cout << "bye" << endl;
            return 0;
        }
        else if (s == "clear"){
            clear(q);
            cout << "ok" << endl;
        }
        else if (s == "front"){
            if (q.size() == 0) cout << "error" << endl;
            else cout << q.front() << endl;
        }
        else if (s == "pop_back"){
            if (q.size() == 0) cout << "error" << endl;
            else{
                cout << q.back() << endl;
                q.pop_back();
            }
        }
        else if (s == "push_back"){
            int x;
            cin >> x;
            q.push_back(x);
            cout << "ok" << endl;
        }
        else if (s == "push_front"){
            int x;
            cin >> x;
            q.push_front(x);
            cout << "ok" << endl;
        }
        else if (s == "pop_front"){
            if (q.size() == 0) cout << "error" << endl;
            else{
                cout << q.front() << endl;
                q.pop_front();
            }
        }
        else if (s == "back"){
            if (q.size() == 0) cout << "error" << endl;
            else cout << q.back() << endl;
        }

    }
    
    return 0;
}
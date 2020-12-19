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
        else if (s == "pop"){
            if (q.size() == 0) cout << "error" << endl;
            else{
                cout << q.front() << endl;
                q.pop_front();
            }
        }
        else if (s == "push"){
            int x;
            cin >> x;
            q.push_back(x);
            cout << "ok" << endl;
        }
    }
    
    return 0;
}
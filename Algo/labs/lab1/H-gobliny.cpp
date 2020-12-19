#include <iostream>
#include <deque>

using namespace std;

int main(){
    int n, x;
    cin >> n;
    deque <int> dq1;
    deque <int> dq2;
    while (n != 0){
        char s;
        cin >> s;
        if (s == '+'){
            cin >> x;
            dq1.push_back(x);
        }
        else if (s == '*'){
            cin >> x;
            dq1.push_front(x);
        }
        else if (s == '-') {
            cout << dq2.front() << endl;
            dq2.pop_front();
        }
        if (dq1.size() > dq2.size()){
            dq2.push_back(dq1.front());
            dq1.pop_front();
        }
        n--;
    }
    return 0;
}
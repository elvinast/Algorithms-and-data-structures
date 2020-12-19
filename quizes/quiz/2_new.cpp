#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int main(){
    deque <int> a;
    int n;
    cin >> n;
    bool isRev = true;
    while(n > 0){
        int x;
        cin >> x;
        if (x == 1){
            int y;
            cin >> y;
            if (isRev) a.push_front(y);
            else a.push_back(y);
            // if(!a.empty()) a.push_back(y);
            // else a.push_front(y);
        }
        else if(x == 2){
            isRev = (isRev + 1) % 2;
        }
        n--;
    }
    
    if(isRev){
        while(!a.empty()){
            cout << a.back() << ' ';
            a.pop_back();
        }
    }
    else{
        while(!a.empty()){
            cout << a.front() << ' ';
            a.pop_front();
        }
    }
    return 0;
}
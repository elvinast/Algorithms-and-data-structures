//игра в пьяницу
#include <iostream>
#include <queue>
using namespace std;
int main(){
    int cnt = 0;
    queue <int> pl1, pl2;
    for(int i = 0; i < 5; i++){
        int x;
        cin >> x;
        pl1.push(x);
    }
    for(int i = 0; i < 5; i++){
        int x;
        cin >> x;
        pl2.push(x);
    }
    for(cnt = 0; !pl1.empty() && !pl2.empty() && cnt <= 200000; cnt++){
        int a = pl1.front(), b = pl2.front();
        pl1.pop(); pl2.pop();
        queue<int> * win = (a == 0 && b == 9) ? &pl1 : 
                           (b == 0 && a == 9) ? &pl2 : 
                           (a > b) ? &pl1 : &pl2;
        win->push(a);
        win->push(b);
    }
    if (pl1.empty()) cout << "second " << cnt << endl;
    else if (pl2.empty()) cout << "first " << cnt << endl;
    else cout << "botva" << endl;
    return 0;
}
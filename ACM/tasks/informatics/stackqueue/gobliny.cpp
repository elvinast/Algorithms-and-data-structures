//гоблины и шаманы
#include <iostream>
#include <deque>
using namespace std;
int main(){
    int n;
    cin >> n;
    deque <int> d;
    for(int i = 0; i < n; i++){
        char x;
        cin >> x;
        if (x == '-' or x == '+') d.push_back((char)x);
        else d.push_back((int)x);
    }
    for(int i = 0; i < d.size(); i++) cout << d[i] << " ";
}
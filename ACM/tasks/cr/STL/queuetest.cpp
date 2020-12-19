#include <queue>
#include <iostream>
using namespace std;
int main(){
    queue <int> q;
    for (int i = 0; i < 10; i++){
        q.push(i);
    }
    cout << q.front() << endl;
    cout << q.back()  << endl;
    cout << q.size()  << endl;
    return 0;
}
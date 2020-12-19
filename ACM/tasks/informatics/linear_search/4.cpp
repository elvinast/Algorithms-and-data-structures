#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    int x;
    cin >> x;
    for(int i = 1; i <= n; i++){
        if (x == a[i]) cout << i << ' ';
    }
    return 0;
}
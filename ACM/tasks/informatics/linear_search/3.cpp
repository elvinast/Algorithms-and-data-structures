#include <iostream>
using namespace std;
int main(){
    int n, x;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> x;
    int m = abs(a[0] - x);
    int res = a[0];
    for (int i = 1; i < n; i++){
        if (abs(a[i] - x) < m){
            m = abs(a[i] - x);
            res = a[i];
        }
    }
    cout << res << endl;
    return 0;
}
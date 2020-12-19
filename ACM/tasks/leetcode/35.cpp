#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int x;
    for(int i = 0; i < n; i++) cin >> a[i];
    int l = 0, r = n - 1;
    cin >> x;
    while (l <= r){
        int mid = (l + r) / 2;
        if (a[mid] == x){
             cout << mid + 1 << endl;
             return 0;
        }
        else if (a[mid] > x) r = mid - 1;
        else l = mid + 1;
    }
    cout << l << endl;
    return 0;
}
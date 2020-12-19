#include <iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    int l = 2, r = x;
    while (l <= r){
        int mid = (l + r) / 2;
        if (mid * mid == x){
            cout << mid;
            return 0;
        }
        else if (mid * mid > x) r = mid - 1;
        else l = mid + 1;
    }
    cout << l - 1;
    return 0;
}
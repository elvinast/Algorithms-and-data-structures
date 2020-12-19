#include <iostream>
using namespace std;
int main(){
    int n, x, y;
    cin >> n >> x >> y;
    int l = 0;
    int r = (x + y + 1 - max(x, y)) * n;
    if (n == 1) cout << min(x, y);
    else{
        while (r - l > 1){
        int mid = (l + r) / 2;
        if (n - 1 <= mid / x + mid / y) r = mid;
        else l = mid;
    }
    cout << l + 1 + min(x,y) << endl;
    }
    return 0;
}
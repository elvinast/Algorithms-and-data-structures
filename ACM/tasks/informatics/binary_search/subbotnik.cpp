#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n, x, y;
    cin >> n >> x >> y;
    int l = 0;
    int r = (x + y + 1 - max(x, y)) * n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    cout << a[(n - 1) / 2 - 2] - a[0];
    return 0;
}
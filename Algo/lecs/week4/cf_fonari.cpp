#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;
int main(){
    ios::sync_with_stdio();
    int n, x;
    cin >> n >> x; // 15
    vector <double> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end()); // 0 3 5 7 9 14 15
    double ans = 2 * max(a[0], x - a[n - 1]);
    for(double i = 0; i < n - 1; i++){
        ans = max(ans, a[i + 1] - a[i]);
    }
    cout << setprecision(20) << ans / 2 <<endl;
    return 0;
}
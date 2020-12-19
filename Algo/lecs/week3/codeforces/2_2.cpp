#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    ios::sync_with_stdio();
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    double l = 0, r = 1e8;

    for(int i = 0; i < 100; i++){
        double m = (l + r) / 2;
        int s = 0;
        for(int j = 0; j < n; j++){
            s += (int)(a[j] / m);
        }
        if (s >= k) l = m;
        else r = m;
    }
    cout << setprecision(10) << l << endl;
    return 0;
}
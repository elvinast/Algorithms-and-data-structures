#include <iostream>
using namespace std;
int main(){
    ios::sync_with_stdio();
    long long w, h, n;
    cin >> w >> h >> n;
    long long l = 0, r = 1e18;

    while (r > l + 1){
        long long m = (l + r) / 2;
        double s = (double)(m / w) * (m / h);
        if (s >= n) r = m;
        else l = m;
    }
    cout << r << endl;
    return 0;
}
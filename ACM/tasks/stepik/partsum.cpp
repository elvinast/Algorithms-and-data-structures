#include <iostream>
using namespace std;
const int maxn = 10000500;
int n;
long long a[maxn];
long long partsum[maxn];
int main(){
    cin >> n;
    long long q;
    cin >> q;
    partsum[0] = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        partsum[i] = partsum[i - 1] + a[i];
    }
    
    for(int i = 0; i < q; i++){
        int l, r;
        cin >> l >> r;
        cout << partsum[r] - partsum[l - 1] << endl;
    }
    return 0;
}

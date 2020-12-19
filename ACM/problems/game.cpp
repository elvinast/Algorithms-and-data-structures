#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

void solve(){
    int t; cin >> t;
    int cases = 1;
    while(t--){
        int n, k, s; cin >> n >> k >> s;
        int cnt1 = 0, cnt2 = 0;
        cnt1 = (k - 1) + 1 + n;
        cnt2 = (k - 1) + 1 + (k - s + n - s);
        cout << "Case #" << cases << ": " << min(cnt1, cnt2) << endl;
        cases++;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
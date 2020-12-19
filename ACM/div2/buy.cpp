#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

void solve(){
    int t; cin >> t;
    while(t--){
        int n, c0, c1, h; 
        cin >> n >> c0 >> c1 >> h;
        string s; cin >> s;
        int cnt0 = 0, cnt1 = 0;
        int good = min(c1, c0);
        for(int i = 0; i < s.size(); i++){
            if (s[i] == '0') cnt0++;
            else if (s[i] == '1') cnt1++;
        }
        int ans = c0 * cnt0 + c1 * cnt1;
        if (good == c1 && ans > cnt0 * h + (cnt0 + cnt1) * good)
            cout << cnt0 * h + (cnt0 + cnt1) * good << endl;
        else if (good == c0 && ans > cnt1 * h + (cnt0 + cnt1) * good)
            cout << cnt1 * h + (cnt0 + cnt1) * good << endl;
        else cout << ans << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

void solve(){
    int t; cin >> t;
    int cases = 0;
    while(t--){
        ll l, r; cin >> l >> r;
        int cnt = 0;
        for(int i = l; i <= r; i++){
            int pos = 1;
            while (i > 0 && i > 10){
                int digit = i % 10;
                i /= 10;
                cout << i << ' ';
            }
            cout << endl;
            pos++;
        }
        cout << "Case #" << cases << ": " << cnt << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
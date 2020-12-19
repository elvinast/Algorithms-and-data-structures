#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

void solve(){
    ll n; cin >> n;
    string s; cin >> s;
    ll cnt = 0;
    ll i = 0;
    for(ll j = 1; j + i <= s.size(); j++){
        for(ll i = j + 1; i + j <= s.size(); i++){
            if (i - j >= 1){
                if ((i + j <= n) && ((s[i - j - 1] == s[i - 1] && s[i - 1] == s[i + j - 1]))){
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
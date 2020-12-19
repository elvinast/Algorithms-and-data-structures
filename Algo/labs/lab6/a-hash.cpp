#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int p = 31;

ll hash_(string s){
    ll s1 = 0;
    ll p_pow = 1;
    for(int i = 0; i < s.size(); i++){
        s1 += (s[i] - 'a' + 1) * p_pow;
        p_pow *= p;
    }
    return s1;
}

vector<ll> on_prefix(string s){
    vector<ll>hash(s.size());
    hash[0] = s[0] - 'a' + 1;
    ll p_pow = p;
    for(int i = 1; i < s.size(); i++){
        hash[i] = hash[i - 1] + (s[i] - 'a' + 1) * p_pow;
        p_pow *= p;
    }
    return hash;
}
void solve(){
    string s, t; cin >> s >> t;
    int n = s.size();
    int m = t.size();
    ll hash_t = hash_(t);
    vector<ll>hash_s = on_prefix(s);
    ll p_pow = 1;
    for(int i = 0; i < n; i++){
        if(i == 0 && hash_t * p_pow == hash_s[i + t.size() - 1]){
            cout << i << ' ';
            p_pow *= p;
        }
        else if(i > 0 && hash_t * p_pow == hash_s[i + m - 1] - hash_s[i - 1]){
            cout << i << ' ';
            p_pow *= p;
        }
        else
            p_pow *= p;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
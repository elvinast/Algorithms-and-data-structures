#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

vector <int> z_function(string &s){
    vector <int> z(s.size());
    z[0] = s.size();
    int l = 0, r = 0;
    for(int i  = 1; i < s.size(); i++){
        if (i <= r)
            z[i] = min(z[i - l], r - i + 1);
        while (i + z[i] < s.size() && s[z[i]] == s[z[i] + i])
            z[i]++;
        // для оптимизации
        // без этих строк 2 теста не проходят
        if (i + z[i] - 1 > r) { 
            l = i;
            r = i + z[i] - 1;
        }
    }
    return z;
}

void solve(){
    string s; cin >> s;
    vector <int> res = z_function(s);
    for(int i = 0; i < res.size(); i++)
        cout << res[i] << ' ';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
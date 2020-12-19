#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

vector <int> getPrefix(string &s){
    vector <int> res(s.size());
    res[0] = 0;
    for(int i = 0; i < s.size() - 1; i++){
        int j = res[i];
        while (j > 0 && s[i + 1] != s[j])
            j = res[j - 1];
        if (s[i + 1] == s[j])
            res[i + 1] = j + 1;
        else res[i + 1] = 0;
    }
    return res;
}

void solve(){
    string s, t;
    cin >> s >> t;
    string st = t + "&" + s;
    vector <int> res = getPrefix(st);
    for(int i = 0; i < res.size(); i++)
        if (res[i] == t.size())
            cout << i  - 2 * t.size() << ' ';
    cout << endl;
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
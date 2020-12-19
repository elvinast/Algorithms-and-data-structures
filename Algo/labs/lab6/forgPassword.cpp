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
    int n, q;
    cin >> n >> q;
    vector<string> pass;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        pass.push_back(s);
    }
    vector<string> parts;
    for(int i = 0; i < q; i++){
        string s;
        cin >> s;
        parts.push_back(s);
    }
    for(int j = 0; j < pass.size(); j++){
        for(int k = 0; j < parts.size(); k++){
            cout << pass[j] << endl;
            // cout << q << endl;
            int cnt = 0;
            string st = parts[k] + "&" + pass[j] ;
            // cout << st << endl;
            vector <int> res = getPrefix(st);
            bool isSubstr = false;
            // cout << res.size() << endl;
            for(int i = 0; i < res.size(); i++){
                // cout << res[i] << endl;
                if (res[i] == parts[k].size()){
                    isSubstr = true;
                    cnt++;
                }
            }
            cout << cnt << endl;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
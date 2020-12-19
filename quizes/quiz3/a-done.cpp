#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>

#define ll long long
#define pb push_back
#define f first
#define s second

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
    string s; cin >> s;
    vector <int> res = getPrefix(s);
    int cnt = 0;
    // for(int i = 0; i < res.size(); i++)
    //     cout << res[i] << " ";
    // cout << endl;
    for(int i = 1; i < s.size(); i++){
        int ans = i + 1;
        if(((ans / 2) % (ans - res[i]) == 0) && !(ans % (ans - res[i]))) {
            cnt++;
            i++;
        }
    }
    cout << cnt << endl; //aba baba bcx
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
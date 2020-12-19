#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#define ll long long

using namespace std;

int getPrefix (string s) {
 	vector<int> res(s.size());
 	for (int i = 0; i < s.size() - 1; ++i) {
 		int j = res[i];
 		while (j > 0 && s[i + 1] != s[j])
            j = res[j - 1];
 		if (s[i + 1] == s[j]) 
            res[i + 1] = j + 1;
        else res[i + 1] = 0;
 	}
    // for(int i  = 0; i < res.size(); i++){
    //     cout << res[i] <<  " ";
    // }
    // cout << endl;
    // cout << res[s.size() - 1] << endl << res[s.size()] << endl;
 	return s.size() - res[s.size() - 1];
}

void solve(){
    string s; cin >> s;
    int res = getPrefix(s);
    // cout << res << endl;
    if(s.size() % res == 0)
        cout << s.size() / res << endl;
	else cout << 1 << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
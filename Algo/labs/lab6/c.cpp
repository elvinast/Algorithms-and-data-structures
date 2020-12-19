#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#define ll long long

using namespace std;

string s, t;
vector <int> res;
bool exists = false;

void getPrefix(string &st) {
	res[0] = 0;
    for(int i = 0; i < st.size() - 1; i++){
        int j = res[i];
        while (j > 0 && st[i + 1] != st[j])
            j = res[j - 1];
        if (st[i + 1] == st[j])
            res[i + 1] = j + 1;
        else res[i + 1] = 0;

		if (res[i + 1] == s.size()) {
			cout << (i + 1) - 2 * t.size() << endl;
	 		exists = true;
			return;
		}
	}
}

void solve(){
    cin >> t >> s;
	string st = t + "&" + s + s;
	res.resize (st.size());
	getPrefix(st);
	if (!exists) cout << -1 << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
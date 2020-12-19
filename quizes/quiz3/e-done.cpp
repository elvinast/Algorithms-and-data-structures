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
bool isOk[100500];

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
	vector <int> res= getPrefix(s);
	int n = res.size();
    int ans = 0;
    // for(int i = 0; i < res.size(); i++){
    //     cout << res[i] << " "; //0 0 0 0 0 0 1 2 3 0 0 1 1 2 3
    // }
    // cout << res[n - 1] << endl; //3
    int check = res[n - 1];
	if(check == 0) {
		cout << "Just a legend" << endl;
		return;
	}
	while(check > 0){
        // cout << check << endl;
		isOk[check] = true; 
		check = res[check - 1];
	}
	for(int i = 0; i < n - 1; ++ i) {
        // cout << isOk[res[i]] << endl;
		if(isOk[res[i]]) ans = max(res[i], ans);
	}
	if(!ans){
		cout << "Just a legend" << endl;
		return;
	}
	for(int i = 0; i < ans; ++ i)
		cout << s[i];
    cout << endl;
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
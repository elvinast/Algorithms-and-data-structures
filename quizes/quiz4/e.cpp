#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <queue>

#define ll long long
#define pb push_back
#define i first
#define j second
#define maxint 1e9

using namespace std;
int n; // число вершин
vector<int> g[100500]; // граф
bool used[100500];
vector<int> ans;
vector<int> way;
 
void dfs (int v) {
	used[v] = true;
	for(size_t i = 0; i < g[v].size(); i++) {
		int y = g[v][i];
		if(!used[y])
			dfs(y);
	}
	ans.push_back(v);
}
 
void topSort() {
	for(int i = 0; i < n; i++)
		used[i] = false;
	ans.clear();
	for(int i = 0; i < n; i++)
		if(!used[i])
			dfs(i);
	reverse(ans.begin(), ans.end());
}

void solve(){
    int m; cin >> n >> m;
    for(int i = 0; i < m;i++) {
        int x, y; cin >> x >> y;
        x--;
        y--;
        g[x].push_back(y);
        // g[y].push_back(x);
    }
    for(int i = 0; i < n; i++) 
        if (!used[i]) dfs(i);
    cout << ans.size() + 1 << endl;
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
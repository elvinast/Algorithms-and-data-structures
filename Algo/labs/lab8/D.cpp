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

int n;
vector<int> g[100500];
int used[100500];
vector<int> comp;
 
void dfs (int v) {
	used[v] = 1;
	comp.push_back(v);
	for (int i = 0; i < g[v].size(); i++) {
		int y = g[v][i];
        if (!used[y])
            dfs(y); 
	}
}
 
void getComponents() {
	for (int i = 0; i < n; i++)
		used[i] = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (used[i] == 0){
            comp.clear();
            dfs(i);
            cnt++;
        }
    for (int i = 0; i < n; i++)
		used[i] = 0;
    // cout << "comp: " << comp.size() << endl;
    cout << cnt << endl;
	for (int i = 0; i < n; i++){
		if (!used[i]) {
			comp.clear();
			dfs(i);
            // cnt++;
            // cout << cnt << endl;
			cout << comp.size() << endl;
			for (int j = 0; j < comp.size(); j++)
				cout << comp[j] + 1 << " ";
            cout << endl;
		}
    }
}

void solve(){
    int m;
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    getComponents();
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
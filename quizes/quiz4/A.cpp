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
    for (int i = 0; i < n; i++)
        if (used[i] == 0){
            comp.clear();
            dfs(i);
        }
    cout << comp.size() << endl; 
}
//1 2   3 4   4 5   5 3

//5 4   1 2   2 3   3 1   4 5

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
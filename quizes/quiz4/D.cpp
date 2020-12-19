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

int used[100500];
vector<int> g[100500];
stack<int> comp;

void dfs(int v) {
    used[v] = 1;
    for(int i = 0; i < g[v].size(); i++){
        int y = g[v][i];
        if(!used[y])
            dfs(y);
    }
    comp.push(v);
    // while(!comp.empty()) {
    //     cout << comp.top() + 1 << " ";
    //     comp.pop();
    // }
}


void solve(){
    int n, m; cin >> n >> m;
    for(int i = 0; i < m;i++) {
        int x, y; cin >> x >> y;
        x--;
        y--;
        g[x].push_back(y);
        // g[y].push_back(x);
    }
    for(int i = 0; i < n; i++) 
        if (!used[i]) dfs(i);
    // cout << comp.size() << endl;
    while(!comp.empty()) {
        cout << comp.top() + 1 << " ";
        comp.pop();
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
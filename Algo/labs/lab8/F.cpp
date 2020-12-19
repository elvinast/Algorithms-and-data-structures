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
int n, m, x, y;
vector<int> used(100500);
vector<int> g[100500];

bool dfs(int v, int p) {
    used[v] = p;
    for (int i = 0; i < g[v].size(); i++) {
        if (used[g[v][i]] == p)
            return 0;
        if (used[g[v][i]] == 0)
            if (!dfs(g[v][i], p % 2 + 1)) // 0 -> 1
                return 0;
    }
    return 1;
}


void solve(){
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        x--;
        y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    bool isBad = false;
    for (int i = 0; i < n; i++)
        if (used[i] == 0)
            if (!dfs(i, 1)) {
                isBad = true;
                break;
            }
    if (isBad) cout << "NO" << endl; //bad
    else {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++) 
            if (used[i] == 1) 
                cout << i + 1 << ' ';
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
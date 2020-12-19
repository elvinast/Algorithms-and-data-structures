#include <iostream>
#include <vector>
#include <queue>

#define maxint 1e9
using namespace std;

vector <int> g[10000000];
int used[1000000];
bool nxt;
int vis[1000000];
int n, cnt = 0, ans = 0;

void dfs(int v){
    vis[v] = 1;
    for(int i = 0; i < g[v].size(); i++){
        if (vis[g[v][i]])
            cnt++;
        else if (!vis[g[v][i]])
            dfs(g[v][i]);
    }
}

// bool check(int v, int x){
//     if(used[v])
//         return false;
//     used[v] = 1;
//     cnt++;
//     for(int i = 0; i < g[v].size(); i++)
//         if(g[v][i] != x){
//             nxt = check(g[v][i], v);
//             if(!nxt) return false;
//         }
//     return true;
// }

void getComps() {
    for(int i = 0; i < n; i++)
        if(!vis[i]){
            dfs(i);
            ans++;
        }
}

int main() {
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if(a[i][j]){
                g[i].push_back(j);
                g[j].push_back(i);
            }
    getComps();
    if (ans > 1) cout << "NO\n"; 
    else cout << "YES\n";
    return 0;
}
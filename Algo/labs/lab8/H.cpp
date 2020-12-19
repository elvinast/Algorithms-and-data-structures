#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <set>

#define ll long long
#define pb push_back
#define f first
#define s second

using namespace std;

vector <int> g[6000];
bool used[6000];

vector <int> res;
bool notOk = false;
set <pair<int, int> > pp;
vector <char> vis;
vector <int> parn;
int a, b, n, m, x, y;

// bool dfs2(int v, int p){
//     vis[v] = 1;
//     for (int i = 0; i < g[v].size(); i++){
//         if (g[v][i] == p)
//             continue;
//         if (vis[g[v][i]] == 0){
//             parn[g[v][i]] = v;
//             if (dfs2(g[v][i], parn[g[v][i]]))
//                 return true;
//         }
//         else if (vis[g[v][i]] == 1){
//             b = v;
//             a = g[v][i];
//             return true;
//         }
//     }
//     vis[v] = 2;
//     return false;
// }

// bool cycle(){
//     vis.assign(n, 0);
//     parn.assign(n, -1);
//     a = -1;
//     for (int i = 0; i < n; i++)
//         if (!vis[i] && dfs2(i, parn[i]))
//             break;
//     return a != -1;
// }

void dfs(int v){
    used[v] = true;
    for (int i = 0; i < g[v].size(); i++){
        int s = g[v][i];
        if (!used[s])
            dfs(s);
    }
    res.push_back(v);
}

void topSort(){
    res.clear();
    for (int i = 0; i < n; i++)
        used[i] = 0;
    for (int i = 0; i < n; i++)
        if (!used[i])
            dfs(i);
    reverse(res.begin(), res.end());
    // for(int i = 0; i < res.size(); i++){
    //     cout << res[i] << " ";
    // }
}


void solve(){
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        cin >> x >> y;
        x--; y--;
        if (x == y){
            notOk = true;
            break;
        }
        if (pp.find(make_pair(y, x)) == pp.end()){
            pp.insert(make_pair(x, y));
            // cout << pp.size() << endl;
        }
            
        else{
            notOk = true;
            break;
        }
        g[x].push_back(y);
    }
    if (notOk) cout << "No" << endl;
    else { 
        cout << "Yes"<< endl;
        topSort();
        for (int i = 0; i < n; i++)
            cout << res[i] + 1 << " ";
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
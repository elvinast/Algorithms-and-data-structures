#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <queue>

#define ll long long
#define pb push_back
#define f first
#define s second
#define maxint 1e9

using namespace std;
vector<int> g[100];
vector<int> used(100);

void solve(){
    int n; cin >> n;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++){
            int t; cin >> t;
            if (t == 1)
                g[i].push_back(j);
        }
    int st, d; // start and dest
    cin >> st >> d;
    st--;
    d--;
    queue<int> q;
    q.push(d);
    used[d] = 1;
    while(!q.empty()){
        int v = q.front();
        q.pop();
        for(int u = 0; u < g[v].size(); u++){
            if (used[g[v][u]] == 0){
                q.push(g[v][u]);
                used[g[v][u]] = used[v] + 1;
                if (g[v][u] == st){
                    while(!q.empty())
                        q.pop();
                    break;
                }
                else q.push(g[v][u]);;
            }
        }
    }
    cout << used[st] - 1 << endl;
    // cout << 123 << endl;
    if (used[st] > 1) {
        cout << st + 1 << ' ';
        // cout << 123 << endl;
        int xx = st;
        while(xx != d){
            for(int u = 0; u < g[xx].size(); u++){
                // cout << used[g[xx][u]] << " " << used[xx] - 1 <<  endl;
                if (used[g[xx][u]] == used[xx] - 1){
                    // cout << 12345678<< endl;
                    cout << g[xx][u] + 1 << " ";
                    xx = g[xx][u];
                    break; 
                }
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
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

using namespace std;

vector<int> g[100];
int used[100];
int d[100];
int n, m, x, y;

void bfs(int v){
    queue<int> q;
    used[v] = 1;
    d[v] = 0;
    q.push(v);
    while(!q.empty()){
        int x = q.front();
        for(int i = 0; i < g[x].size(); i++){
            int y = g[x][i];//x-y
            if (used[y] == 0){
                q.push(y);
                used[y] = 1;
                d[y] = d[x] + 1;
            }
        }
       q.pop(); 
    }
}

void solve(){
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        cin >> x >> y;
        x--;
        y--;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    bfs(0);
    for(int i = 0; i < n; i++){
        cout << i + 1 << "-->" << d[i] << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
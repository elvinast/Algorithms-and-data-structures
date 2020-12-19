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

int n, m;
int a[100][100];
int used[100][100];

void dfs(int x, int y) {
    used[x][y] = 1;
    if (x >= 1 && a[x - 1][y] == 1 && used[x - 1][y] == 0)
        dfs(x - 1, y);
    if (x + 1 < n && a[x + 1][y] == 1 && used[x + 1][y] == 0)
        dfs(x + 1, y);
    if (y >= 1 && a[x][y - 1] == 1 && used[x][y - 1] == 0)
        dfs(x, y - 1);
    if (y + 1 < m && a[x][y + 1] == 1 && used[x][y + 1] == 0)
        dfs(x, y + 1);
}

void solve(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            char t;
            cin >> t;
            if(t == '.') a[i][j] = 0;
            else a[i][j] = 1;
        }
    }
    int cnt = 0;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if (a[i][j] && !used[i][j]) {
                dfs(i, j);
                cnt++;
            }
    cout << cnt << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
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

int b[1000][1000];
queue <int> y;
queue <int> x;
int n, m;

void solve(){
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            b[i][j] = maxint;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] != 1 && a[i][j] != 0) //is mario
                b[i][j] = 0;
                x.push(i);
                y.push(j);
        }
    }
    while (!x.empty()) {
        int u = x.front();
        x.pop();
        int v = y.front();
        y.pop();
        for (int i = 0; i <= 2; i++)
            for (int j = 0; j <= 2; j++)
                if (i != j){
                    int xx = u - 1 + i;
                    int yy = v - 1 + j;
                    if(!((xx < 0 || yy < 0 ) || (xx > n - 1 || yy > m - 1) || a[xx][yy] != 1 || b[xx][yy] <= b[u][v] + 1)){
                        b[xx][yy] = b[u][v] + 1;
                        x.push(xx);
                        y.push(yy);
                    }
                }
    }  
    int maxi = 0;
    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) 
            if (a[i][j]) maxi = max(b[i][j], maxi);
    if (maxi != maxint) cout << maxi << endl;
    else cout << -1 << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
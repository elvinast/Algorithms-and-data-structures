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


void solve(){
    int n, q; cin >> n >> q;
    int a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    while(q--){
        int x, y, z; cin >> x >> y >> z;
        x--; y--; z--;
        if (a[x][y] == 0 || a[x][z] == 0 || a[y][x] == 0 || a[y][z] == 0 || a[z][y] == 0 || a[z][x] == 0)
            cout << "NO" << endl;
        else cout << "YES" << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
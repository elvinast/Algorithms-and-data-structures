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

int n; 
int dx[8] = {2, 2, 1, 1, -1, -1, -2, -2};
int dy[8] = {1, -1, 2, -2, 2, -2, 1, -1};
int a[21][21]; 

vector <pair <int, int> > res;

void getMoves(int x,int y){
    if(a[x][y] == 0) {
        res.push_back(make_pair(x, y));
        reverse(res.begin(), res.end());
        for(int i = 0; i < res.size(); i++)
            cout << res[i].first << ' ' << res[i].second << endl;
        exit(0);
    }
    else {
        res.push_back(make_pair(x, y));
        int first = x; int sec = y;
        for(int t = 0; t < 8; t++){
            int k = first - dx[t]; int l = sec - dy[t];
            if((k > 0 && l > 0) && (k <= n && l <= n) && a[k][l] == a[first][sec] - 1)
                getMoves(k, l);
        }
    }
}

void solve(){
    cin >> n;
    queue <pair <int, int> > q;
    for(int i = 0; i <= n; i++)
        for(int j = 0; j <= n; j++)
            a[i][j] = maxint;
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    a[x1][y1] = 0; 
    q.push(make_pair(x1, y1));
    while(!q.empty()) {
        int first = q.front().first;
        int sec = q.front().second;
        q.pop();
        for(int t = 0; t < 8; t++){
            int k = first + dx[t];
            int l = sec + dy[t];
            if((k > 0 && l > 0) && (k <= n && l <= n) && a[k][l] > a[first][sec] + 1){
                a[k][l] = a[first][sec] + 1;
                q.push(make_pair(k, l));
            }
        }
    }
    cout << a[x2][y2] << endl;
    getMoves(x2, y2);
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
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

void solve(){
    int n; cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    int ans = 1e9;
    int x, y, z;
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            for(int k = j + 1; k < n; k++)
                if (a[i][j] + a[j][k] + a[k][i] < ans){
                    ans = a[i][j] + a[j][k] + a[k][i];
                    x = i, y = j, z = k;
                }
    cout << ++x << " " << ++y << " " << ++z << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
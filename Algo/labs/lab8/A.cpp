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
    cout << endl;
    int c[n];
    for(int i = 0; i < n; i++) cin >> c[i];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if (a[i][j] == 1 && c[i] != c[j])
                cnt++;
        }
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
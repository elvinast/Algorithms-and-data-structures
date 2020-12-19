#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

#define ll long long
#define pb push_back

using namespace std;

void solve(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << n - 1 << endl;
        for(int j = 2; j <= n; j++)
            cout << j << ' ';
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
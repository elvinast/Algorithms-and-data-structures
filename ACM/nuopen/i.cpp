#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;
int imin(int n, int x){
    if(n > x) return 1;
    return 1 + imin(n, x - (n - 1));
}

int imax(int n, int x){
    if(n > x) return 1;
    return 2 + imax(n, x - (n - 1));
}

void solve(){
    int n; cin >> n;
    int x; cin >> x;
    cout << imin(n, x) << " " << imax(n, x);
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
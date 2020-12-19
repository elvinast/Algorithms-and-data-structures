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
    int a, b;
    cin >> a >> b;
    bool ok = false;
    for(int i = b; i >= a; i--) {
        for (int j = i / 2; j >= 1; j--) {
            if(i % j == 0 && j != 1) {
                ok = false;
                break;
            }
            else ok = true;
        }
        if(ok && i > 1) cout << i << " ";
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
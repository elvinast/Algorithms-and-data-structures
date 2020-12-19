#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

void solve(){
    int t;
    cin >> t;
    while(t > 0){
        int n;
        cin >> n;
        if (n % 5 != 0){
            cout << n / 5 + 1 << endl;
        }
        else cout << n / 5 << endl;
        t--;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
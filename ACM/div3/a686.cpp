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

// void solve(){
//     int t; cin >> t;
//     while(t--){
//         int n; cin >> n;
//         for(int i = n; i > 0; i--){
//             if (n % 2 == 1 && i == n / 2 + 1){
//                 cout << n / 2 << " " << n / 2 + 1 << " ";
//                 i--;
//                 continue;
//             }
//             cout << i << " ";
//         }
//         cout << endl;
//     }
// }

void solve(){
    int t; cin >> t;
    while(t--){
        int n;
		cin >> n;
        for(int i = 0; i < n; i++){
            cout << (i + 1) % n + 1 << " ";
        }
        cout << endl;
    }
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

int sp[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
//////////////0  1  2  3  4  5  6  7  8  9

void solve(){
    int t;
    cin >> t;
    while(t > 0){
        int n;
        string m;
        cin >> n >> m;
        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += sp[m[i] - '0'];
        // cout << sum << endl;
        for (int i = 1; i < n; i++){
            for (int j = 9; j >= 0; j--){ //max
                if(sum - sp[j] >= 2 * (n - i) && sum - sp[j] <= 7 * (n - i)) {
                    cout << j;
                    sum -= sp[j];
                    break;
                }
            }
        } 
        for (int i = 9; i >= 0; i--){
            if(sum == sp[i]){
                cout << i << endl;
                break;
            }
        }
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
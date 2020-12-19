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
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        int cnt[200500] = {0};
        for(int i = 0; i < n; i++){
            cin >> v[i];
            cnt[v[i]]++;
        }
        int mini = -1;
        for(int i = 0; i < n; i++) {
            if (cnt[v[i]] == 1 && (mini == -1 || v[mini] > v[i])){
                mini = i;
                // cout << endl << mini << endl;
            }
        }
        cout << (mini == -1 ? -1 : mini + 1) << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}

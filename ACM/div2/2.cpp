#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

void solve(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n, k;
        cin >> n >> k;
        vector<int> v;
        int size = n * k;
        for(int j = 0; j < size; j++){
            int l;
            cin >> l;
            v.push_back(l);
        }
        int sum = 0;
        int p = 0;
        for(int c = v.size();c > 0; c--){
            while(p != k){
            c--;
            sum += v[c - (n / 2)];
            c = c - (n / 2);
            p++;
            }
        }
        cout << endl;
        cout << sum << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
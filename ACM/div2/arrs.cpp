#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

void generateArray(int n){
    vector<int> v;
    v.push_back(1);
    int sum = 1;
    int s = 1;
    for(int i = 2; i <= 100; i++){
        if ((sum + i) % (s + 1) == 0){
            s++;
            // cout << i << endl;
            v.push_back(i);
        } 
        // cout << s << ' ' << n << endl;
        if (s == n)
            break;
    }
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << ' ';
    }
    cout << endl;
}

void solve(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        // generateArray(n);
        for(int j = 0; j < n; j++){
            cout << 2 << ' ';
        }
        cout<<endl;
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#define ll long long

using namespace std;

void solve(){
    int t;
    cin >> t;
    while (t--){
        int n;
        vector<int> b;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            b.push_back(x);
        }
        int sum = 0;
        vector<int> a;
        for(int i = 0; i < n; i++){
            int x = pow(2, b[i]);
            a.push_back(x);
            sum += a[i];
        }
        int sum1 = 0;
        for(int j = 0;j < n;j++){
            sum1 += a[j];
            if(sum1 == sum - sum1){
                cout<<"YES"<<endl;
                return;
            }
        }
        cout<<"NO"<<endl;
        
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
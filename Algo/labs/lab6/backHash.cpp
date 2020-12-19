#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#define ll long long

using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(i == 0)
            cout << (char)(a[0] + 97);
        else{
            cout << (char)(((a[i] - a[i - 1]) / pow(2, i)) + 97);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
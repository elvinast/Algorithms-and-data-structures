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
    int n = 8;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int cnt = 0;
    for (int i = 0; i < n; i++) 
        if (a[i] != 0) 
            a[cnt++] = a[i];
    while (cnt < n) 
        a[cnt++] = 0; 
    for(int i = 0; i < n; i++) cout << a[i] <<  " "; 
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
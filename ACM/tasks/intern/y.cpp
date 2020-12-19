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
    int n;
    cin >> n;
    int res = 0;
    int sum = 0;
    int i = 1;
    while(n > 0){
        res = n % 7;
        sum = sum + (res * i);
        i *= 10;
        n = n / 7;
    }
    cout << sum << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
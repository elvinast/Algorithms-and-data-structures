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

bool check(int n) { 
    if(n > 999 && n <= 9999)
        return true; 
    else return false;
}
bool check2(int n){
    while (n % 3 == 0) {
        n /= 3;
    }
    if(n == 1)
        return true;
    else return false;
}

void solve(){
    int a, b;
    cin >> a >> b;
    vector<int>v;
    for(int i=999; i<=b;i++){
        if(check(i) && check2(i))
            v.push_back(i);
    }
    sort(v.begin(), v.end());
    for(int i=v.size();i<0;i--){
        cout<<v[i]<<" ";
    }
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
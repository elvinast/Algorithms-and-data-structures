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

vector<int>v(1000000, 0);

bool prime(int n){
    if(n<=1)
        return false;
    for(int i=2;i*i<=n;i++)
        if(n%i==0)
            return false;
    return true;
}


void solve(){
    int n;
    cin>>n;
    int cnt = 0;
    while(cin>>n){
        if(!prime(n))
            v[n]++;
    }
    // sort(v.begin(), v.end());
    for(int i=0;i<v.size();i++){
        if(v[i]>1)
            cout<<i<<" ";
    }

}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
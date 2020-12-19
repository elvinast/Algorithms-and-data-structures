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
    int a, b, h;
    int cnt = 1;
    cin >> a >> b >> h;
    if(b < a){
        cnt += (a - b) / (b - h);
        if((a - b) % (b - h) > 0)
            cnt++;
    }
    cout << cnt << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
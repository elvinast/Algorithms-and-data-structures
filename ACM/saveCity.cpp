#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

void solve(){
    int t; cin >> t;
    while (t > 0){
        int a, b; cin >> a >> b;
        string s; cin >> s;
        int sum = 0;
        for(int i = 1; i < s.size() - 1; i++){
            if (s[i - 1] == '0' && s[i + 1] == '0' && s[i] == '1')
                sum += b;
            if (s[i] == '0' && s[i - 1] == '1' && s[i + 1] == '1')
                sum += (a + b);
            if (s[i] == '0' && s[i - 1] == '1' && s[i + 1] == '1')
                sum += (a + b);
        }
        cout << sum << endl;
        t--;
    }
    
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

using namespace std;

void solve(){
    int t;
    cin >> t;
    while(t > 0){
        int c, k;
        cin >> c >> k;
        string s;
        cin >> s;
        int cnt = 0;
        int maxi = -100500;
        for(int i = 1; i < s.size(); i++){
            if (s[i] == '0' && s[i - 1] == '0'){
                cnt++;
                if (cnt > maxi)
                    maxi = cnt;
            }
            else cnt = 0;
        }
        if (maxi >= k){
            cout << "yes" << endl;
        }
        else cout << "no" << endl;
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
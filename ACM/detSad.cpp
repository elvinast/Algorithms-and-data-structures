#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long
//done
using namespace std;

int gcd(int a, int b){
    if (a == 0 or b == 0) return a + b;
    return gcd(b, a % b);
}

bool goodPlace(int x, vector <int> &v){
    for(int i = 0; i < v.size(); i++){
        if(gcd(x, v[i]) == 1 || v[i] % x == 0 || x % v[i] == 0)
            return false;
    }
    return true;
}


void solve(){
    int t; cin >> t;
    while (t > 0){
        int n;
        cin >> n;
        int size = 4 * n;
        // vector<int> v;
        for(int i = 2; i <= size; i++){
            vector<int> v;
            v.push_back(i);
            int cnt = n - 1;
            if(cnt > 0){
                for(int j = i + 1; j <= size; j++){
                    if(goodPlace(j, v)){
                        cnt--;
                        v.push_back(j);
                    }
                }
            }
            if(cnt == 0){
                for(int i = 0; i < v.size(); i++)
                    cout << v[i] << " ";
                cout<<endl;
                break;
            }
        }
          t--;  
            // cout << i << ' ' << j << ' ';
        }
        
    }


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
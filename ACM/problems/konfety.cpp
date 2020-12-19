#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>

#define ll long long
#define pb push_back

using namespace std;

void solve(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n, m;
        cin >> n >> m;
        int a[n][m];
        for(int k = 0;k < n; k++)
            for(int j = 0; j < m; j++)
                cin >> a[k][j];
        int cnt = 0;
        int sum = 0;
        for(int k = 0; k < n; k++){
            for(int j = 0; j < m; j++){
                if(a[k][j] <= 0)
                    cnt++;
                sum += abs(a[k][j]);
            }
        }

        if(cnt % 2 == 0)
            cout<<sum<<endl;

        else{
            int min = 1e9;
            int c = 0;
            for(int k = 0;k<n;k++){
                for(int j = 0;j<m;j++){
                    if (a[k][j] < min){
                        min = a[k][j];
                        if(j + 1 < m)
                            c = a[k][j+1];
                        else c = a[k][j-1];
                    }

                }
            }
            cout << sum - (c + abs(min))<<endl;
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
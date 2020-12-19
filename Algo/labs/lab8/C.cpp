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
    int n, s; cin >> n >> s;
    int a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];
    int cnt = 0;
    stack<int> st;
    for(int i = 0; i < n; i++)
		if(a[s - 1][i])
            st.push(i);
    while(!st.empty()){
        int t = st.top();
        st.pop();
        if(!a[t][t]){
            cnt++;
            for(int i = 0; i < n; i++)
                if(a[t][i])
                    st.push(i);
            a[t][t] = 1;
        }
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
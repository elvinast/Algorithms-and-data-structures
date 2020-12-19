#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <set>
#include <queue>

#define ll long long
#define pb push_back
#define f first
#define s second

using namespace std;

int used[100000];

void bfs(int v){
    queue <int> q;
    q.push(v);
    used[v] = v;
    // cout << v << endl;
    while(!q.empty()){
        int tmp = q.front();
        q.pop();
        vector <int> num(4);

        if (tmp % 10 != 9)
            num[1] = tmp + 1;
        else num[1] = tmp;

        if (tmp / 1000 != 1) 
            num[0] = tmp - 1000; 
        else num[0] = tmp;

        num[2] = tmp % 10 * 1000 + tmp / 10;
        num[3] = tmp / 1000 + tmp % 1000 * 10;

        // cout << num[2] <<  " " << num[3] << endl;
        
        for (int i = 0; i < num.size(); i++)
            if(!used[num[i]]){
                used[num[i]] = tmp;
                q.push(num[i]);
            }
    }
}


void solve(){
    int n, v; cin >> n >> v;
    bfs(v);
    int tmp = n;
    while(tmp != v){
        cout << tmp << endl;
        tmp = used[tmp];
    }
    cout << v << endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
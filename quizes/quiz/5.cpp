#include <iostream>
using namespace std;

int x[2 * 100010], y[2 * 100010];
int n, k, a, b;

bool f(int h){
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if (x[i] <= h && y[i] <= h)
            cnt++;
    }
    return cnt >= k;
}

int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        cin >> x[i] >> y[i];
    }
    int l = 0, r = 1e9, res = -1;
    while (l <= r){
        int m = (l + r) / 2;
        if (f(m)){
            res = m;
            r = m - 1;
        }
        else l = m + 1;
    }

    cout << res << endl;
    return 0;
}
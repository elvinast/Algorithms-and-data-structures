#include <iostream>
#include <algorithm>

using namespace std;

int l1, r1, l2, r2, n;
int a[100500];

int findNum(int x){
    int l = 0, r = n - 1, ans = -1;
    while (l <= r){
        int m = (l + r) / 2;
        if (a[m] <= x) {
            ans = m;
            l = m + 1;
        }
        else r = m - 1;
    }
    if (ans == -1){
        return 0;
    } 
    return ans + 1; //num of elems <=
}

int main(){
    int q;
    cin >> n >> q;
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    while (q > 0){
        cin >> l1 >> r1 >> l2 >> r2;
        if (l2 > r1 || l1 > r2){
            cout << findNum(r1) - findNum(l1 - 1) + findNum(r2) - findNum(l2 - 1) << endl;
        }
        else{
            cout << findNum(max(r1, r2)) - findNum(min(l1, l2) - 1) << endl;
        }
        q--;
    }
    return 0;
}
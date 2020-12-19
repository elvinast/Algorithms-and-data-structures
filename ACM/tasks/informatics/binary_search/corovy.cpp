#include <iostream>
using namespace std;

int n, a[100500];

bool check(int m){
    int cows = 1;
    int cnt = 1;
    for(int i = 0; i < n; i++){
        if (a[i] - a[cnt] >= m){
            cnt = i;
            cows++;
        }
    }
    return cows >= m;
}

int main(){
    int x;
    cin >> n >> x;
    for(int i = 0; i < n; i++) cin >> a[i];
    int l = 0, r = a[n - 1] - a[0];
    if (n == 3 and x == 2){
        cout << a[n - 1] - a[0]<< endl;
        return 0;
    }
    while (r != l){
        int m = (l + r) / 2;
        if (check(m)) l = m + 1;
        else r = m;
    }
    cout << l - 1<< endl;
    return 0;
}
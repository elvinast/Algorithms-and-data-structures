#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, cnt = 0;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int i = 1;
    while (i < n){
        cnt += abs(a[i - 1] - a[i]);
        i += 2;
    }
    cout << cnt << endl;
    return 0;
}
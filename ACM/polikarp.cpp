#include <iostream>
#include <algorithm>
using namespace std;
//done
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    int cnt = 1;
    for(int i = 0; i < n; i++){
        if (a[i] >= cnt) cnt++;
    }

    cout << cnt - 1 << endl;
    return 0;
}
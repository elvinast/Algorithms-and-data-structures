#include <iostream>
using namespace std;
int main(){
    int n, cnt = 0, sum = 0;
    cin >> n;
    while (n != 0){
        int k;
        cin >> k;
        int a[k];
        cnt = 0;
        sum = 0;
        for(int i = 0; i < k; i++){
            cin >> a[i];
            if (a[i] == 0){
                a[i] = 1;
                cnt++;
            }
            sum += a[i];
        }
        n--;
        if (sum == 0) cout << cnt + 1 << endl;
        else cout << cnt << endl;
    }
    return 0;
}
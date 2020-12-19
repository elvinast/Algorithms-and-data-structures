#include <iostream>

using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    int a[n];
    
    for(int i = 0; i < n; i++)
        cin >> a[i];
    
    while (q > 0){
        int l1, r1, l2, r2;
        cin >> l1 >> r1 >> l2 >> r2;
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if ((a[i] >= l1 && a[i] <= r1) || (a[i] >= l2 && a[i] <= r2))
                cnt++;
        }
        cout << cnt << endl;
        q--;
    }
    return 0;
}
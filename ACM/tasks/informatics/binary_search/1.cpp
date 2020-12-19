#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < k; i++){
        int q;
        cin >> q;

        int l = 0, r = n;

        while(r - l > 1){
            int m = (l + r) / 2;
            if(a[m] > q) r = m;
            else l = m;
        }
        if (r == n) cout << a[l] << endl;
        else{
            int t1 = (q - a[l]);
            int t2 = (a[r] - q);
            if (t1 <= t2){
                cout << a[l] << endl;
            }
            else cout << a[r] << endl;
        } 
        
    }
    return 0;
}
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
        if (a[l] != q){
            cout << 0 << endl; 
            continue;
        }
        int right = l;
        l = -1; 
        r = n - 1;
        while (r - l > 1){
            int m = (l + r) / 2;
            if (a[m] >= q) r = m;
            else l = m;
        }
        cout << r + 1 << ' ' << right + 1 << endl;
    } 
    return 0;
}
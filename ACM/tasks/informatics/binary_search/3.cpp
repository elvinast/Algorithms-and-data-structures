#include <iostream>
using namespace std;

int n;
int a[100500];

bool bin_search(int k){
    int l = 0, r = n - 1;
    while (l < r){
        int mid = (l + r) / 2;
        if (a[mid] < k) l = mid + 1;
        else r = mid;
    }
    if (a[r] == k) return true;
    return false;
}

int main(){
    int k;
    cin >> n >> k;
    int b[k];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < k; i++){
        cin >> b[i];
        if (bool(bin_search(b[i]))) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
#include <iostream>
using namespace std;
int f(int l, int r){
    int cnt = 0;
    for (int i = l; i < r; i++){
        if (i % (r + 1) >= (r + 1) / 2)
            cnt++;
    }
    if (cnt == r - l)
        return r - 1;
    else {
        while (l != 0){
            cnt = 0;
            for (int i = l; i < r; i++){
                if (i % (l - 1) >= (l - 1) / 2)
                    cnt++;
                if (cnt == l - r){
                    return l - 1;
                    break;
                }
            }
            l--;
        }

    }
    return 0;
}

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int l, r;
        cin >> l >> r;
        if (f(l, r) > 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
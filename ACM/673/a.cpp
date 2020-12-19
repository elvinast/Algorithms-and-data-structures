#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while (n > 0){
        int l, r;
        cin >> l >> r;
        while (l < r + 1){
            int mid = (l + r) / 2;
            if (l % mid >= mid / 2){
                cout << "YES" << endl;
                break;
            }
            if (l % mid <= mid / 2){
                l = r + 1;
            }
            else r = l - 1;
        }
        cout << "NO" << endl;
        n--;
        // if l % a >= a/2 => it is answer
        
    }
    return 0;
}

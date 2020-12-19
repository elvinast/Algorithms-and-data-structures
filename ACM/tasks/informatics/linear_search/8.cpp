#include <iostream>
using namespace std;
int main(){
    int n, x;
    cin >> x;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    bool check = true;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (a[j][i] == x){
                check = true;
                break;
            }
            else check = false;
        }
        if (!check) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
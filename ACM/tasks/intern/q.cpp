#include <iostream>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n / 2; i++){
        for(int j = 0; j < m / 2; j++){
            a[i][j] = 1;
        }
    }
    for(int i = 0; i < n / 2; i++){
        for(int j = m / 2; j < m; j++){
            a[i][j] = 0;
        }
    }
    for(int i = n / 2; i < n; i++){
        for(int j = 0; j < m / 2; j++){
            a[i][j] = 2;
        }
    }
    for(int i = n/2; i < n; i++){
        for(int j = m/2; j < m; j++){
            a[i][j] = 3;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
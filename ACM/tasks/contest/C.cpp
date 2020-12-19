#include <iostream>
using namespace std;
int main(){
    int n, cnt = 0;
    cin >> n;
    int a[n][2];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < 2; j++)
            cin >> a[i][j];
    
    for(int i = 0; i < n; i++){
        cnt = 60 * 24 - a[i][0] * 60 - a[i][1];
        cout << cnt << endl;
        cnt = 0;
    }
    return 0;
}
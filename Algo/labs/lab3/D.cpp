#include <iostream>
using namespace std;


int maxi, mini;

int main(){
    int n, m, cnt = 0;
    cin >> n >> m;
    int a[n][m];
    int min[800];
    int max[800];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    //to find max
    for(int i = 0; i < m; i++){
        maxi = 0;
        for(int j = 0; j < n; j++){
            if (a[j][i] > a[maxi][i]) maxi = j;
        }
        max[i] = a[maxi][i];
    }
    //to find min
    for(int i = 0; i < n; i++){
        mini = 0;
        for(int j = 0; j < m; j++){
            if (a[i][j] < a[i][mini]) mini = j;
        }
        min[i] = a[i][mini];
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if ((a[i][j] == min[i]) && (a[i][j] == max[j])) cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
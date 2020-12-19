#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][3];
    
    for(int i = 0; i < n; i++)
        for(int j = 0; j < 3; j++)
            cin >> a[i][j];
        
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i][2] > a[j][2]){
                swap(a[i][0], a[j][0]);
                swap(a[i][1], a[j][1]);
                swap(a[i][2], a[j][2]);
            }

            if(a[i][1] > a[j][1] && a[i][2] == a[j][2]){
                swap(a[i][0], a[j][0]);
                swap(a[i][1], a[j][1]);
                swap(a[i][2], a[j][2]);
            }

            if(a[i][0] > a[j][0] && a[i][1] == a[j][1] && a[i][2] == a[j][2]){
                swap(a[i][0], a[j][0]);
                swap(a[i][1], a[j][1]);
                swap(a[i][2], a[j][2]);
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
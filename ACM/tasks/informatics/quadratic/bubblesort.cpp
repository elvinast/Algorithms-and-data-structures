#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int cnt = 0;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if (a[i] > a[j]){
                cnt ++;
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
        }
    }
    }
    cout << cnt << endl;
    return 0;
}
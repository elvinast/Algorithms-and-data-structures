#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if (a[i] >= 0){
            sum += a[i];
        }
        else break;
    }
    cout << sum;
    return 0;
}
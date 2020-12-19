#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int maxi = -100500;
    for(int i = 0; i < n; i++){
        if (a[i] > maxi) maxi = a[i];
    }
    cout << maxi;
    return 0;
}
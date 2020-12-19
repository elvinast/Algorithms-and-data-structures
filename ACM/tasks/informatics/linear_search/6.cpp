#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int maxi = 0;
    for(int i = 1; i < n; i++){
        if (a[i] > a[maxi]) maxi = i;
    } 
    cout << maxi + 1;
    return 0;
}
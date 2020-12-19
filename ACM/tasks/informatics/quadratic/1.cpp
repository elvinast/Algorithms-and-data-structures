#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int maxi = -100500;
    int idxmax = -1;
    for(int i = 0; i < n; i++){
        if (a[i] > maxi){
            maxi = a[i];
            idxmax = i;
        }
    }
    int temp = a[0];
    a[0] = maxi;
    a[idxmax] = temp;
    for(int i = 0; i < n; i++) cout << a[i] << ' ';
    return 0;
}
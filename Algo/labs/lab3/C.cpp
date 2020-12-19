#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int maxi = -100500;
    int idx = -1;
    for(int i = 0; i < n; i++){
        if (a[i] > maxi){
            maxi = a[i];
            idx = i;
        }
    }
    cout << idx + 1 << endl;
    return 0;
}
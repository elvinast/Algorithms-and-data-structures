#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int maxi1 = -100500;
    int maxi2 = -100500;
    for(int i = 0; i < n; i++){
        if (a[i] > maxi1 and a[i] != maxi2){
            maxi2 = maxi1;
            maxi1 = a[i];
        }
        if (a[i] > maxi2 and a[i] < maxi1 and maxi2 != maxi1){
            maxi2 = a[i];
        }
    }
    cout << min(maxi2, maxi1);
    return 0;
}
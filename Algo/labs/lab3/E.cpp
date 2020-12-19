#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    // int  a[n];
    // for(int i = 0; i < n; i++) cin >> a[i];
    int x;
    int maxi = -100500;
    int maxi1 = -100500;
    while (n != 0){
        cin >> x;

        if (x > maxi && x != maxi1) {
            maxi1 = maxi;
            maxi = x;
        }
        
        if (x > maxi1 && x < maxi && maxi1 != maxi ){
            maxi1 = x;
        }
        n--;
    }
    cout << min(maxi1, maxi) << endl;
    return 0;
}
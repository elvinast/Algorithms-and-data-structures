#include <iostream>
#include <algorithm>
using namespace std;
//done 
int main(){
    int t;
    cin >> t;
    while (t > 0){
        int cnt = 0;
        int n, x;
        cin >> n >> x;
        int a[n], b[n];

        for(int i = 0; i < n; i++)
            cin >> a[i];
        for(int i = 0; i < n; i++)
            cin >> b[i];

        reverse(b, b + n);

        for(int i = 0; i < n; i++){
            if (a[i] + b[i] <= x)
                cnt++;
        }
        if (cnt == n) cout << "Yes" << endl;
        else cout << "No" << endl;
        t--;
    }
    return 0;
}
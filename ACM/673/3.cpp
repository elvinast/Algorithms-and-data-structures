#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int m;
    cin >> m;
    while (m > 0){
        int n;
        cin >> n;
        vector <int> a(n);
        // int maxi = -100500;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 1; i < n; i++){
            if (a[i] == a[0]){
                cout << -1 << endl;
                break;
            }
        }
        int maxi = *max_element(a.begin(), a.end());
        for(int i = 0; i < n; i++){
            if (a[i] == maxi){
                if (i >= 1 && a[i - 1] < a[i]){
                    cout << i + 1 << endl;
                    break;
                }
                if (i < n - 1 && a[i + 1] < a[i]){
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
        m--;
    }
    return 0;
}
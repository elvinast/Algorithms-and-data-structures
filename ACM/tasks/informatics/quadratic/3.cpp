#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n + 1];
    for(int i = 0; i < n; i++) cin >> a[i];
    int idx, num;
    cin >> num >> idx;
    for(int i = n; i != idx - 1; i--){
        a[i] = a[i - 1];
    }
    
    a[idx - 1] = num;
    for(int i = 0; i < n + 1; i++) cout << a[i] << ' ';
    return 0;
}
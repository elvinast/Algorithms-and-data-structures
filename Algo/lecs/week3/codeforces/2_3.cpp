#include <iostream>
using namespace std;

int main(){
    long long n, x, y;
    cin >> n >> x >> y;
    long long l = 0;
    long long r = n * (max(x, y) + x + y + 1);
    if (n == 1){
        cout << min(x, y) << endl;
        return 0;
    } 
    while (r > l + 1){
        long long m = (r + l) / 2;
        if ((m / x) + (m / y) >= n - 1) r = m;
        else l = m;
    }
    cout << l + 1 + min(x, y) << endl;
    return 0;
}
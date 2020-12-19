#include <iostream>
using namespace std;
int main(){
    int sz;
    cin >> sz;
    while (sz != 0){
        long long n, m, k;
        cin >> n >> m >> k;
        if (k % 2 == 1)  cout << n + ((k / 2) * (n - m)) << endl;
        else cout << ((k / 2) * (n - m)) << endl;
        sz--;
    }
    return 0;
}
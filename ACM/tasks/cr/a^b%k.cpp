#include <iostream>
using namespace std;

int m_powink(int a, int n, int k){
    if (n == 0) return 1;
    if (n == 1) return a;
    int res = m_powink(a, n / 2, k);
    if (n % 2 == 0) return ((res % k) * (res % k)) % k;
    return (((res % k) * (res % k)) % k) * a;
}

int m_pow(int a, int n){
    if (n == 0) return 1;
    if (n == 1) return a;
    int res = m_pow(a, n / 2);
    if (n % 2 == 0) return res * res;
    return res * res * a;
}

int main(){
    // int a, b, k;
    // cin >> a >> b >> k;
    // int p = 1;
    // for(int i = 0; i < b; i++){
    //     //p = p * a;
    //     p = ((p % k) * (a % k)) % k;
    // }
    // cout << p;
    int a, b, k;
    cin >> a >> b >> k;
    //cout << m_powink(a, b);
    cout << m_powink(a, b, k);
    return 0;
}
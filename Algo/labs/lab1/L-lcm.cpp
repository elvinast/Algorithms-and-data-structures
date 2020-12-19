#include <iostream>
using namespace std;

int gcd(int a, int b){
    if (a % b == 0) return b;
    return gcd(b % a, a);
}

int main(){
    int a, b;
    cin >> a >> b;
    if (a == 0 or b == 0){
        cout << a + b;
        return 0;
    }
    cout << a / gcd(a,b) * b;
    return 0;
}
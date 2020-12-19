#include <iostream>
using namespace std;

int gcd(int a, int b){
    // if (a == 0 or b == 0) return a + b;
    // else if (a == 1 or b == 1) return 1;
    //return gcd(max(a,b) % min(a, b), min(a, b));
    if (a % b == 0) return b;
    return gcd(b % a, a);
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << gcd(a,b);
    return 0;
}
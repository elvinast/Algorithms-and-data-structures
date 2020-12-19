#include <iostream>
using namespace std;

int gcd(int a, int b){
    if (a == 0 or b == 0) return a + b;
    else if (a == 1 or b == 1) return 1;
    return gcd(max(a,b) % min(a, b), min(a, b));
}

int main(){
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << gcd(abs(x2 - x1), abs(y2 - y1)) + 1;
    return 0;
}
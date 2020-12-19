#include <iostream>
using namespace std;

long long gcd(int a, int b) { 
    if (a == 0) return b; 
    return gcd(b % a, a); 
} 

int main(){
    int a, b;
    cin >> a >> b;
    cout << a / gcd(a,b) * b;
    return 0;
}
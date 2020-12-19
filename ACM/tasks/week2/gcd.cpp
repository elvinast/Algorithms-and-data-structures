#include <iostream>
using namespace std;

int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 

int main(){ 
    // slow algorithm:
    // int gcd = 0;
    int a, b;
    cin >> a >> b;
    // for (int i = 1; i <= a + b; i++){
    //     if (a % i == 0 and b % i == 0){
    //         gcd = i;
    //     }
    // }
    // cout << gcd;

    //eff algo:
    cout << gcd(a,b);
    return 0;
}
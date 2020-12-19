#include <iostream>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i * i <= n; i++){ // n = 25    i = 2 3 4 5
        if (n % i == 0) return false;
    }
    return true;
}

int main(){
    int x;
    cin >> x;
    if (isPrime(x)) cout << "prime" << endl;
    else cout << "composite" << endl;
    return 0;
}
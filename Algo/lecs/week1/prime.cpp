#include <iostream>
using namespace std;

void easyFindPrimes(int x){
    for(int i = 2; i <= x; i++){
        bool isPrime = true;
        for(int j = 2; j < i; j++){
            if (i % j == 0) isPrime = false;
        }
        if (isPrime) cout << i << " ";
    }
}

int main(){
    int x;
    cin >> x;
    easyFindPrimes(x);
    return 0;
}
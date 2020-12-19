#include <iostream>
using namespace std;


void naive(int n){ // O(n^2)
    for(int i = 2; i <= n; i++){
        int k = 0;
        for(int j = 1; j <= i; j++){
            if (i % j == 0) k++;
        }
        if (k == 2) cout << i << " ";
        
    }
}

void more_efficient(int n){ // O(n * sqrt(m))
    for(int i = 2; i <= n; i++){
        int k = 0;
        for(int j = 2; j * j <= i; j++){
            if (i % j == 0){
                k = 1;
                break;
            }
        }
        if (k == 2) cout << i << " ";
        
    }
}

// REAL ERATOSTHENES SIEVE BELOW

int p[1000000]; // initially all elements equal zero

int main(){
    int n;
    cin >> n;
    for(int i = 2; i * i <= n; i++){
        if (p[i] == 0){
            int k = i;
            while (k + i <= n){
                k += i; 
                p[k] = 1;
            }
        }
    }
    for(int i = 2; i <= n; i++){
        if (p[i] == 0) cout << i << " ";
    }
    return 0;
}
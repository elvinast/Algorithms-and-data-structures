#include <iostream>
using namespace std;

int pr[1000010];

int find_primes(int n) {
    int cnt = 0;
    for (int i = 2; i * i <= 100500; i++) { 
        if (pr[i] == 0) {
            int k = i;                 
            while (k + i <= 100500) {
                k += i;
                pr[k] = 1;
            }
        }
    }
    for (int i = 2; i < 100500; i++){
        if(pr[i] == 0) cnt++;
        if(cnt == n) return i;
    }
    return -1;
}

int Super_prime(int n){
    int cnt = 0;
    for (int i = 2; i < 100500; i++){
        if(pr[i] == 0) cnt++;
        if(cnt == n) return i;
    }
    return -1;
}

int main(){
    int k;
    cin >> k;
    cout << Super_prime(find_primes(k));
    return 0;
}
// works by exp time - very slow
#include <iostream>
using namespace std;

/*int fibonacci(int n){
    if (n == 0 or n == 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(){
    int n;
    cin >> n;
    cout << fibonacci(n);
    return 0;
} */

// efficient algorithm
int fib(int n) 
{
    int f[n + 2];  
    int i;
    f[0] = 0; 
    f[1] = 1;
    for(i = 2; i <= n; i++) 
    {
       f[i] = f[i - 1] + f[i - 2]; 
    } 
    return f[n]; 
    }
int main () 
{ 
    int n;
    cin >> n;
    cout << fib(n); 
    return 0; 
}
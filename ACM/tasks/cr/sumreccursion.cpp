#include <iostream>
using namespace std;

int i = 0;

int arraySum(int a[], int sum, int size){
    if (size == 0) return sum;
    return arraySum(a, sum + a[i++], size - 1);
}

int main(){
    int sum = 0;
    int size = 5;
    int a[size];
    for(int i = 0; i < 5; i++) cin >> a[i];
    cout << arraySum(a, sum, size);
    return 0;
}
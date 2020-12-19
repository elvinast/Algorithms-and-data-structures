#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (int(log2(n)) < log2(n)) cout << int(log2(n)) + 1;
    else cout << int(log2(n));
    return 0;
}
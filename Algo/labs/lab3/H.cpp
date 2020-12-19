#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    double x = log2(n);
    cout << ceil(x) << endl; //round up
    return 0;
}
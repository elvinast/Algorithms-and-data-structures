#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float f(float x){
    return x*x + sqrt(x);
}

int main(){
    double n;
    cin >> n;
    double l = 0, r = n;
    while (fabs(r - l) > 1e-10){
        double mid = (l + r)/2;
        if (f(mid) < n) l = mid;
        else r = mid;
    }
    cout << fixed << setprecision(6) << r;
    return 0;
}
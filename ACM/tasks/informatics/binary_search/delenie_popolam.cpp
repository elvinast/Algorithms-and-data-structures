#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

long double f(double a, int n, double r){
    double l = 0;
    while (r - l > 1e-10){
        double mid = (l + r)/2;
        if (pow(mid,n) < a) l = mid;
        else r = mid;
    }
    return r;
}

int main(){
    double a, n;
    cin >> a >> n;
    if(a >= 1) {
        double res = f(a, n, a);
        cout << fixed << setprecision(6) << res;
    }
    else {
        if(a < 1) {
            double res = f(a, n, 1);
            cout << fixed << setprecision(6) << res;
        }
    }
    return 0;
}
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int res = 0;
    for(int i = 2; i <= n; i++){
        int divs = 0;
        for(int j = 2; j < i; j++){
            if (i % j == 0) divs++;
        }
        if (divs <= 2 && divs >= 1) 
            res++;
    }
    cout << res << endl;
    return 0;
}
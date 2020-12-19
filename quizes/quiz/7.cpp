#include <iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    int res = 0;
    for(int i = 1; i <= n; i++){
        int divs = 0;
        for(int j = 2; j * j <= i && divs <= 1; j++){
            if (i % j == 0)
                divs++;
        }
        if (divs == 1) res++;
    }
    cout << res << endl;
    return 0;
}
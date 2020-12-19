#include <iostream>
#define ll long long
using namespace std;
int main(){
    int x;
    cin >> x;
    ll i = 1, j = 1, res;
    for (int k = 1; k <= x; k++){
        if (i * i == j * j * j){
            i++;
            k--;
        }
        else if (i * i < j * j * j){
            res = i * i;
            i++;
        }
        else if (i * i > j * j * j){
            res = j * j * j;
            j++;
        }
    }
    cout << res << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int x;
    cin >> x;
    long long i = 1, j = 1, res;
    int cnt = 0;
    for(int n = 1; n <= x; n++){
        if (i * i == j * j * j){
            i++;
            n--;
            continue;
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
    cout << res;
    return 0;
}
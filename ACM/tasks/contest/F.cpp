#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while (n != 0){
        int a, b;
        cin >> a >> b;
        for(int i = 0; i < a; i++){
            cout << (char)(97 + i % b);
        }
        n--;
        cout << endl;
    }
    return 0;
}
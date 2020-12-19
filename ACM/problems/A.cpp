#include <iostream>
#include <algorithm>

using namespace std;

int bubbleSort(int a[], int n){
    int temp = 0, steps = 0;
    for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++){
        if(a[j] < a[i]) {
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    steps++;
    }
    return steps;
}

bool checking(int steps, int n){
    return (steps > (n * (n - 1)) / 2 - 1);
}

int main(){


    int n;
    cin >> n;
    while(n > 0){
        int sz;
        cin >> sz;
        int a[sz];
        for(int i = 0; i < sz; i++) cin >> a[i];
        int steps = bubbleSort(a, sz);
        if (checking(steps, sz)) cout << "YES" << endl;
        else cout << "NO" << endl;
        n--;
    }
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

bool checker(int *a, int n) { 
    for(int i = 0; i < n - 1; ++i) {
        if(a[i] > a[i + 1]) {
            return false;
        }
    }
    return true;
}

void insertionSort(int *a, int n) { 
    for(int i = 1; i < n; ++i) {
        int j = i;
        if(j && a[j] < a[j - 1]) {
            while(j && a[j] < a[j - 1]) {
                swap(a[j], a[j - 1]);
                --j;
            }
            for(int i = 0; i < n; i++) cout << a[i] << ' ';
            cout << endl;
        }
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    int key, j;
    for(int i = 0; i < n; i++) cin >> a[i];
    if(!checker(a,n)){
        insertionSort(a, n);
    }  
    
    //for(int i = 0; i < n; i++) cout << a[i] << ' ';
    return 0;
}
#include <iostream>
using namespace std;

int shift_up(int *a, int n, int i){
    while(i){
        if(a[i / 2 - 1 + i % 2] < a[i]){
            swap(a[i / 2 - 1 + i % 2], a[i]);
            i = i / 2 + i % 2 - 1;
            }
        else return i;
    }
    return 0;
}
int sift_down(int *a, int n, int i)
{
    while(2 * i + 2 < n){
        if(a[2 * i + 1] > a[i] && a[2 * i + 1] > a[2 * i + 2]){
            swap(a[i], a[2 * i + 1]);
            i = 2 * i + 1;
            continue;
        }
        if(a[2 * i + 2] > a[i] && a[2 * i + 1] < a[2 * i + 2]){
            swap(a[i], a[2 * i + 2]);
            i = 2 * i + 2;
            continue;
        }
        if(a[i] > a[2 * i + 1] && a[i] > a[2 * i + 2]) return i;
    }
    if(a[i] < a[n - 1] && 2 * i + 2 == n){
        swap(a[n - 1], a[i]);
        i = n - 1;
    }
    return i;
}
int extractMax(int *a, int n, int i){
    int res = a[0];
    a[0] = a[n - 1];
    n = n - 1;
    return sift_down(a, n, i);
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) sift_down(a, n, i);
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
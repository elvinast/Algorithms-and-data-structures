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
 
int main()
{
    int n,m;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    cin >> m;
    int ar[m];
    int size2 = m;
    int c, b;
    while(m > 0){
        cin >> c;
        cin >> b;
        a[c - 1] = a[c - 1] + b;
        ar[size2 - m] = shift_up(a, n, c - 1);
        m--;
    }
    for(int i = 0; i < size2; i++) cout << ar[i] + 1 << endl;
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}

 

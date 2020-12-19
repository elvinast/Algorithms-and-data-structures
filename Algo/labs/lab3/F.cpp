#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int maxi = *max_element(a, a + n);
    int mini = *min_element(a, a + n);

    for(int i = 0; i < n; i++)
        if (a[i] == maxi)
            a[i] = mini;
            
    for(int i = 0; i < n; i++)
        cout << a[i] << ' ';
    return 0;
}
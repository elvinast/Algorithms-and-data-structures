#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int r, int x){ 
    if (r >= l) { 
        int mid = l + (r - l) / 2;
        if (arr[mid] == x) 
            return mid;
        if (arr[mid] > x) 
            return binarySearch(arr, l, mid - 1, x); 
        return binarySearch(arr, mid + 1, r, x); 
    }
    return -1; 
} 
  
int main() {
    int n, m;
    cin >> n;
    int a1[n];
    for (int i = 0; i < n; i++) cin >> a1[i];
    cin >> m;
    int a2[m];
    for (int i = 0; i < m; i++){
        cin >> a2[i];
        int x = a2[i];
        int n = sizeof(a1) / sizeof(a1[0]);
        int result = binarySearch(a1, 0, n - 1, x); 
        cout << result << ' ';
    } 
    return 0; 
} 
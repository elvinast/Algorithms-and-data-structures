#include <iostream>
using namespace std;

int k = 0;

// void countingSort(int a[], int n)    {
// 	int b[10000];
//     int c[10000];
//     int max = a[0];
// 	for (int i = 1; i < n; i++) if (a[i] > max) max = a[i];
// 	for (int i = 0; i <= max; ++i) c[i] = 0;
//     for (int i = 0; i < n; ++i) c[a[i]]++;
// 	for(int i = 1; i <= max; i++) c[i] += c[i - 1];
// 	for(int i = n - 1; i >= 0; i--){
// 		b[c[a[i]] - 1] = a[i];      
// 		c[a[i]]--;	  
// 	}
//     for(int i = 0; i < n; i++) a[i] = b[i];
// }


void CountingSort(int a[], int n) {
	int k;
	int idx = 0;
	int min, max;
	min = max = a[0];
	for(int i = 1; i < n; i++) {
		min = (a[i] < min) ? a[i] : min;
		max = (a[i] > max) ? a[i] : max;
	}
 
	k = max - min + 1;
	int *B = new int [k]; 
	for(int i = 0; i < k; i++) B[i] = 0;

	for(int i = 0; i < n; i++) B[a[i] - min]++;
	for(int i = min; i <= max; i++) 
		for(int j = 0; j < B[i - min]; j++) a[idx++] = i;
 
	delete [] B;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    CountingSort(a, n);
    for(int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}
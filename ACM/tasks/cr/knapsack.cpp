#include <iostream>
using namespace std;

// NAIVE ALGORITHM O(2^n)
int max(int a, int b) {
    return (a > b) ? a : b;
    } 

int knapSack(int w, int wt[], int val[], int n){
    if (n == 0 or w == 0) return 0;
    if (wt[n - 1] > w) return knapSack(w, wt, val, n - 1); 
    else return max(val[n - 1] + knapSack(w - wt[n - 1], wt, val, n - 1),  knapSack(w, wt, val, n - 1)); 
}
//

//EFF ALGO O(n*w)
int knapSack2(int W, int wt[], int val[], int n){
    int i, w; 
    int K[n + 1][W + 1]; 
    // Build table K[][] in bottom up manner 
    for (i = 0; i <= n; i++) { 
        for (w = 0; w <= W; w++) { 
            if (i == 0 || w == 0) K[i][w] = 0; 
            else if (wt[i - 1] <= w) K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]); 
            else K[i][w] = K[i - 1][w]; 
        } 
    } 
    return K[n][W]; 
}


int main(){
    int val[] = {60, 100, 120}; 
    int wt[] = {10, 20, 30}; 
    int W = 50; 
    int n = sizeof(val) / sizeof(val[0]); 
    cout << knapSack2(W, wt, val, n); 
    return 0;
}
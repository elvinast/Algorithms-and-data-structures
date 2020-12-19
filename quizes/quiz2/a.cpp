#include<iostream> 
 
using namespace std; 
 
int a[211111], n, s, z; 
void sift_up(int x){ 
    if(x == 1 || a[x] <= a[x / 2]){ 
        z = x; 
        return; 
    } 
    swap(a[x], a[x / 2]); 
    sift_up(x / 2); 
} 
void sift_down(int x){ 
 z = x; 
 if(x * 2 <= s && a[x] < a[x * 2]) 
  z = x * 2; 
 if(x * 2 + 1 <= s && a[z] < a[x * 2 + 1]) 
  z = x * 2 + 1; 
 if(z == x) 
  return; 
 swap(a[x], a[z]); 
 sift_down(z); 
} 
void extract_node(int x){ 
    a[x] = - 1e9 - 1; 
    swap(a[x], a[s--]); 
    if(x <= s){ 
        sift_down(x); 
    }else z = 0; 
} 
void insert_node(int x){ 
    a[++s] = x; 
    sift_up(s); 
} 
int main(){ 
    int t, x, y; 
    cin >> n >> x; 
    for(int i = 1; i <= n; i++){ 
        cin >> a[i]; 
        insert_node(a[i]); 
    } 
    long long sum = 0; 
    for(int i = 1; i <= x; i++){ 
        sum += a[1]; 
        a[1] -= 1; 
        sift_down(1); 
    } 
    cout << sum << endl; 
}
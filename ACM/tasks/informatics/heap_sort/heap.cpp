#include <iostream>
#include <vector>
using namespace std;

vector <int> b, c;

void build(const vector <int> a, int k){
    int n = a.size();
    b.resize(n);
    c.resize(n);
    k--;
    for(int i = 0; i < n; i++){
        if(i % k) b[i] = min(a[i], b[i - 1]);
        else b[i] = a[i];
    }
    c.back() = a.back();
    for(int i = n - 2; i >= 0; i--){
        if((i + 1) % k) c[i] = min(a[i], c[i + 1]);
        else c[i] = a[i];
    }
}
int GetMin(int l, int k){
    return min(c[l], b[l + k - 1]);
}
int main(){
    int n, k;
    cin >> n >> k;
    vector <int> a;
    for (int i = 0; i < n; ++i){
        int x;
        cin >> x;
        a.push_back(x);
    }
    if (k == 1){
        for (int i = 0; i < a.size(); i++)
            cout << a[i] << endl;
            return 0;
    }
    build (a, k);
    for (int i = 0; i <= n - k; i++) cout << GetMin(i, k) << endl;
    return 0;
}
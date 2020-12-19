#include <iostream>
#include <vector>

using namespace std;

int bin_search_upper(vector<int> &a, int k) {
    int l = -1; 
    int r = a.size();
    int res = 0;
    while (r > l + 1)  {
        int m = (l + r) / 2;
        if (a[m] >= k) { 
            r = m;
        }
        else if (a[m] < k) l = m;
    }
    return r;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> b(k);
    for (int i = 0; i < k; i++)
        cin >> b[i];
    for(int i = 0; i < k; i++){
        if (bin_search_upper(a, b[i]) == -1) cout << 0 << endl;
        else cout << bin_search_upper(a, b[i]) + 1 << endl;
    }
    return 0;
}
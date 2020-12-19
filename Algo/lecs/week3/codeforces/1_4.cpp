#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int bin_search_lower(vector<int> &a, int k) {
    int l = -1; 
    int r = a.size();
    int res = 0;
    while (r > l + 1)  {
        int m = (l + r) / 2;
        if (a[m] > k) { 
            r = m;
        }
        else if (a[m] <= k) l = m;
    }
    return l;
}

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
    int n, m;
    cin >> n;
    vector <int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    cin >> m;
    while(m--){
        int l, r;
        cin >> l >> r;
        int ind_l = lower_bound(a.begin(), a.end(), l) - a.begin();
        int ind_r = upper_bound(a.begin(), a.end(), r) - a.begin();
        cout << ind_r - ind_l << endl;
    }
    return 0;
}
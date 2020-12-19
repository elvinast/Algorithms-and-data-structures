#include <iostream>
#include <vector>

using namespace std;

bool bin_search(vector<int> &a, int k) {
    int l = 0;
    int r = a.size() - 1;
    while (l < r) {
        int m = (l + r) / 2;
        if (a[m] == k)
            return true;
        if (a[m] > k)
            r = m - 1;
        else
            l = m + 1;
    }
    if (a[l] == k)
        return true;
    return false;
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
        if (bin_search(a, b[i])) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
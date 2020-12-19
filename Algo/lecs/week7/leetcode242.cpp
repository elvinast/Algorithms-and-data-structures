#include <iostream>
using namespace std;

void quicksort(int l, int r, string &a) {
    int i = l;
    int j = r;
    int p = a[(l + r) / 2];

    while (i < j) {
        while (a[i] < p) i++;
        while (a[j] > p) j--;
        if (i <= j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    // cout << a << endl;
    if (l < j)
        quicksort(l, j, a);
    if (i < r)
        quicksort(i, r, a);
}

int main(){
    string s, t;
    cin >> s >> t;
    quicksort(0, s.size() - 1, s);
    quicksort(0, t.size() - 1, t);
    //cout << s << endl << t << endl;
    if (s == t) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
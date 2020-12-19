#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <tuple>
#include <set>
#include <chrono>
 
#define faster ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define show(v) for(int i : v)cout << i << ' ';cout << '\n';
#define MAXN 100010
using namespace std;
using namespace std::chrono;
typedef long long ll;
 
int inf = 1e9;
int mod = 1e9 + 7;
int n;
int a[MAXN];
 
//vector<int> z_function (string s) {
//    int n = (int) s.length();
//    vector<int> z (n);
//    for (int i = 1, l = 0, r = 0;i < n;i++) {
//        if (i <= r)
//            z[i] = min (r - i + 1, z[i - l]);
//        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
//            ++z[i];
//        if (i + z[i] - 1 > r) {
//            l = i; r = i + z[i] - 1;
//        }
//    }
//    return z;
//}
 
bool f(int d) {
    for(int i = 1;i < n;i++) {
        if(a[i + 1] - a[i] > d)
            return false;
    }
    return true;
}
 
int lower_b(int v) {
    int l = 0, r = n;
    while(l + 1 < r) {
        int mid = (l + r) >> 1;
        if(a[mid] <= v) l = mid;
        else r = mid;
    }
    return l;
}
 
bool ff(int d) {
    for(int i = 0;i <= n;i++) {
        int c = a[i] + d;
        int l = lower_b(c);
        if(l - i > 1)return false;
    }
    return true;
}
 
void solve() {
    cin >> n;
    for(int i = 1;i <= n;i++) cin >> a[i];
    a[0] = 0; a[n + 1] = inf + 5;
    sort(a, a + n + 2);
    int l = 0, r = inf + 10;
 
    while(l + 1 < r) {
        int mid = (l + r) >> 1;
        bool cc = ff(mid);
        if(!cc){
            r = mid;
            continue;
        }
        bool cur = f(mid);
        if(cur) {
            cout << mid << endl;
            return;
        } else l = mid;
    }
    cout << 0 << endl;
}
 
int main() {
    faster
    solve();
    return 0;
}
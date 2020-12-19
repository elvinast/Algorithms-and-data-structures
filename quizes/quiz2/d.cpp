#include <iostream>
#include <vector>
#define ll long long
using namespace std;

//DONE

vector <ll> v;

void quicksort(ll l, ll r) {
    ll i = l;
    ll j = r;
    ll p = v[(l + r) / 2];

    while (i < j) {
        while (v[i] < p) i++;
        while (v[j] > p) j--;
        if (i <= j) {
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }
    if (l < j)
        quicksort(l, j);
    if (i < r)
        quicksort(i, r);
}

ll checkMult(ll i){
    quicksort(0, i - 1);
    return v[i - 1] * v[i - 2] * v[i - 3];
}
int main(){
    ll n;
    cin >> n;
    for(ll k = 0; k < n; k++){
        ll x;
        cin >> x;
        v.push_back(x);
        //cout << i << endl << n << endl;
        if (k + 1 < 3){
            cout << -1 << endl;
        }
        else cout << checkMult(k + 1) << endl;
    }
    return 0;
}
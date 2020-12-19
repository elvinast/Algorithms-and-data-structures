#include <iostream>
#include <vector>
#define ll long long
using namespace std;

class MaxHeap {
    public:
    vector<ll> a;
    // vector<ll> b;
    ll parent(ll i) {
        return (i - 1) / 2;
    }

    ll left(ll i) {
        return 2 * i + 1;
    }

    ll right(ll i) {
        return 2 * i + 2;
    }
 
    void insert(ll k) {
        a.push_back(k);
        // b.push_back(k);
        // ll i = a.size() - 1;
        // while (i > 0 && a[parent(i)] < a[i]) {
        //     swap(a[parent(i)], a[i]);
        //     i = parent(i);
        // }
    }

    int siftDown(ll i) { 
        if(left(i) > a.size() - 1){
            return i;
        }
        int j = left(i);
        if(right(i) < a.size() && a[right(i)] > a[j])
            j = right(i);
        if(a[i] < a[j]) {
            swap(a[i], a[j]);
            return siftDown(j);
        }
        else //if(a[i] > a[j]){
            return i;
        //}
    }

    void siftUp(){
        ll i = a.size() - 1;
        while (i >= 0){
            if (a[parent(i)] < a[i]){
                swap(a[parent(i)], a[i]);
                // cout << "ok" << endl;
            }
            i--;
        }
    }

    // int siftDown(ll i, ll x){

    // }   

    void print() {
        // findIdx(i, x);
        //siftUp();
        ll i = a.size() - 1;
        for (ll i = 0; i < a.size(); i++) {
           // heapify(i);
            cout << a[i] << " ";
        }
        cout << endl;
    }

    int getMax() {
        return a[0];
    }


    int changeValue(ll i, ll x){
        // findIdx(i, x);
        a[i] -= x;
        return siftDown(i) + 1;
    }

};

int main(){
    ll n, m;
    cin >> n;
    MaxHeap *heap = new MaxHeap();

    for(ll i = 0; i < n; i++){
        ll k;
        cin >> k;
        heap->insert(k);
    }

    cin >> m;
    ll i, x;
    // heap->print();
    while (m > 0){
        cin >> i >> x;
        cout << heap->changeValue(i - 1, x) << endl;
        m--;
    }

    heap->print();
    // for(int i = 0; i < n; i++){ // O(n * log) - heap sort
    //     cout << heap->extractMin() << " ";
    // }
   
    return 0;
}
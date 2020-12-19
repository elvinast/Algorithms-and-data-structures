#include <iostream>
#include <vector>
#define ll long long
using namespace std;

class MaxHeap {
    public:
    vector<ll> a;

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
        ll i = a.size() - 1;
        while (i > 0 && a[parent(i)] < a[i]) {
            swap(a[parent(i)], a[i]);
            i = parent(i);
        }
    }

    void heapify(ll i) { 
        while (a[parent(i)] < a[i]){
            swap(a[i], a[parent(i)]);
            i = parent((i));
        }
        cout << i + 1 << endl;
    }

    void siftUp(){
        ll i = a.size() - 1;
        while (i >= 0){
            if (a[parent(i)] < a[i])
                swap(a[parent(i)], a[i]);
            i--;
        }
    }

    void print() {
        siftUp();
        for (ll i = 0; i < a.size(); i++) 
            cout << a[i] << " ";
        
        cout << endl;
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
    heap->print();
   
    return 0;
}
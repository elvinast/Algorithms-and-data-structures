#include <iostream>
#include <vector>
#define ll long long
using namespace std;
ll n;
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

    int heapify(ll i) { //ставит элемент на место
        if(left(i) > a.size() - 1){
            return i;
        }
        int j = left(i);
        if(right(i) < a.size() && a[right(i)] > a[j])
            j = right(i);
        if(a[i] < a[j]) {
            swap(a[i], a[j]);
            return heapify(j);
        }
        else //if(a[i] > a[j]){
            return i;
        //}
    }

    int extractMax() {
        int root = a[0];
        swap(a[0], a[a.size() - 1]);
        // cout << a.size() / 2;
        a.pop_back();
        if (a.size() > 0){
            //cout << a.size() - 1 <<  " ";
            cout << heapify(0) + 1 << " ";
        }
        return root;
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

};

int main(){
    cin >> n;
    MaxHeap *heap = new MaxHeap();

    for(ll i = 0; i < n; i++){
        ll k;
        cin >> k;
        heap->insert(k);
    }

    for(int i = 0; i < n - 1; i++){ // O(n * log) - heap sort
        cout << heap->extractMax() << endl;
    }

   
    return 0;
}
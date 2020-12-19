#include <iostream>
#include <vector>
#define ll long long
using namespace std;
vector<int> a;
class MaxHeap {
    public:
    int parent(int i) {
        return (i - 1) / 2;
    }

    int left(int i) {
        return 2 * i + 1;
    }

    int right(int i) {
        return 2 * i + 2;
    }

    void insert(int k) {
        a.push_back(k);
        int i = a.size() - 1;
        while (a[parent(i)] < a[i]){
            swap(a[i], a[parent(i)]);
            i = parent(i);
        }
        // siftUp();
        // cout <<  i + 1 << endl;
    }

    int heapify(int i) { //ставит элемент на место
        int nn = a.size() - 1;
        if(left(i) > nn){
            return i;
        }
        int j = left(i);
        if(right(i) < nn + 1 && a[right(i)] > a[left(i)])
            j = right(i);
        if(a[i] < a[j]) {
            swap(a[i], a[j]);
            return heapify(j);
        }
        else if(a[i] > a[j]){
            return i;
        //}
       
        }
        return i;
    }


    void print() {
        //siftUp();
        int nn = a.size();
        for (int i = 0; i < nn; i++) 
            cout << a[i] << " ";
        
        cout << endl;
    }

    void extractMax() {
        int root = a[0];
        swap(a[0], a[a.size() - 1]);
        a.pop_back();
        if (a.size() > 0)
            heapify(0);
        cout << a[0] << endl;
    }

};

int main(){
    int n, m, c;
    cin >> m;
    MaxHeap *heap = new MaxHeap();
    int sz = n;
    while (m > 0){
        int z;
        cin >> z;
        if (z == 1){
            heap->extractMax();
        }
        else if (z == 0){
            cin >> c;    
            heap->insert(c);
        }
        //cout << m << endl;
        m--;
    }

    // heap->print();

    return 0;
}
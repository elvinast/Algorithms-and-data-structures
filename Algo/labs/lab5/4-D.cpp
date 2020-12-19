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
        cout <<  i + 1 << endl;
    }

    int heapify(int i) { 
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
        int nn = a.size() - 1;
        swap(a[0], a[nn]);
        // cout << a.size() / 2;
        a.pop_back();
        if (a.size() == 0){
            //cout << a.size() - 1 <<  " ";
            cout << 0 << " ";
        }
        else if (a.size() != 0){
            //cout << a.size() - 1 <<  " ";
            cout << heapify(0) + 1 << " ";
        }
        cout << root << endl;
    }

};

int main(){
    int n, m, c;
    cin >> n >> m;
    MaxHeap *heap = new MaxHeap();
    int sz = n;
    while (m > 0){
        int z;
        cin >> z;
        if (z == 1){
            if (a.size() == 0){
                cout << -1 << endl;
            }
            else{
                heap->extractMax();
                n++;
            }
            // cout << endl;
        }
        else if (z == 2){
            // n--;
            // cout << n << endl;
            cin >> c;
            if (a.size() == 0)
                n = sz;
            if (n == 0){
                cout << -1 << endl;
                //continue;
            }
            else{
                heap->insert(c);
                n--;
            }
        }
        //cout << m << endl;
        m--;
    }

    heap->print();

    return 0;
}
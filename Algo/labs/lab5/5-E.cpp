#include <iostream>
#include <vector>
using namespace std;
vector <int>a;
int n;
class MinHeap{
    public:

    int parent(int i){
        return (i - 1) / 2;
    }
    int left(int i){
        return 2 * i + 1;
    }
    int right(int i){
        return 2 * i + 2;
    }
    void insert(int k){
        a.push_back(k);
        int i = a.size() - 1;
        while (a[parent(i)] < a[i]){
            swap(a[i], a[parent(i)]);
            i = parent((i));
        }
        // siftUp();
        cout << i + 1 <<endl;
    }

    int heapify(int i){ //ставит элемент на место
        if (left(i) > a.size()-1)
            return i;
        int j = left(i);

        if (right(i) < a.size() && a[right(i)] > a[left(i)])
            j = right(i);
        
        if (a[i] < a[j]){
            swap(a[i], a[j]);
            return heapify(j);
            
        }
        else if(a[i] > a[j]){
            return i;
        }
        return i;
        

    }
    int siftUp(int i){
        while(a[parent(i)] < a[i]){
            swap(a[i], a[parent(i)]);
            i = parent((i));
        }
        return i + 1;
        // if(i > 0 && a[parent(i)] < a[i]) {
        //     swap(a[i], a[parent(i)]);
        //     siftUp(parent(i));
        // }
    }


    void extractMax(){
        // if(a.size()==0) cout<<-1;
        int root = a[0];
        swap(a[0], a[a.size()-1]);
        a.pop_back();
        if (a.size() == 0){
            cout <<0 << ' ';
        }
        else if (a.size() != 0){
            cout << heapify(0) + 1 << " ";
        }
        cout <<root << endl;
    }

    void print(){
        for(int i = 0; i < a.size(); i++){
            cout << a[i] << ' ';
        }
        cout << endl;
    }

    void deleteElement(int i){
        int nn = a.size() - 1;
        if (nn < i) {
            //cout << a.size() - 1 <<  " ";
            cout << -1 << endl;
            return;
        }
        else{
            // int root = a[i - 1];
            cout << a[i] << endl;
            swap(a[i], a[nn]);
            a.pop_back();
            if(a[i] > a[parent(i)])
                siftUp(i);
            else heapify(i);
            n++;
        }
        // if (a.size() > 0 && i < a.size()){
        //     siftUp(i);
        //     heapify(i);
        // }
        // for (ll i = a.size() / 2; i >= 0 ; i--) { // справа налево
        //     siftDown(i);
        // }
    }
};
int main(){
    int m, c, idx, z;
    MinHeap *heap = new MinHeap();
    cin >> n >> m;
    // int c = n;
    int sz = n;
    while(m > 0){
        cin >> z;
        if (z == 1){
            if (a.size() == 0){
                cout << -1 << endl;
            }
            else{
                heap->extractMax();
                n++;
            }
        }
        else if (z == 2){
            // n--;
            // cout << n << endl;
            cin >> c;
            if (a.size() == 0){
                n = sz;
            }    

            if (n == 0){
                cout << -1 << endl;
                // cout << "yes";
                //continue
            }

            else {
                heap->insert(c);
                n--;
            }
        }
        else if (z == 3){
            cin >> idx;
            if (idx == 0)
                cout << -1 << endl;
            else 
                heap->deleteElement(idx - 1);
        }
        m--;
    }

    heap->print();
    
    return 0;
}
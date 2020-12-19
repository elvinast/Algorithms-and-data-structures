#include <iostream>
#include <vector>
using namespace std;
vector<long long>a;
long long n, q;
class MinHeap{
    public:
    long long parent(long long i){
        return (i-1)/2;
    }

    long long left(long long i){
        return 2*i+1;
    }

    long long right(long long i){
        return 2*i+2;
    }
    void insert(long long k){
        a.push_back(k);
        int i = a.size() - 1;
        // cout<<a.size()<<endl;
        while(a[parent(i)] < a[i]){
            swap(a[i], a[parent(i)]);
            i = parent((i));
        }
        cout<<i+1<<endl;
    }

    int heapify(long long i){
        if(left(i)>a.size()-1)
            return i;
        int j = left(i);
        if(right(i)<a.size() && a[right(i)]>a[left(i)]){
            j = right(i);
        }
        
        if(a[i]<a[j]){
            swap(a[i], a[j]);
            int k;
            k = heapify(j);
            return k;
            
        }
        else if(a[i]>a[j]){
            return i;
        }
        return i;

    }
    int Sift_Up(long long i){
        while(a[parent(i)] < a[i]){
            swap(a[i], a[parent(i)]);
            i = parent((i));
        }
        return i+1;
    }

    void Sift_Down(long long i, long long x){
        a[i] = a[i] + x;
        
        cout<<heapify(i) + 1<<" ";
    }

    void extractMax(){
        // if(a.size()==0) cout<<-1;
        int root = getMax();
        swap(a[0], a[a.size()-1]);
        a.pop_back();
        if(a.size()==0){
            cout<<0<<" ";
        }
        else if(a.size()!=0){
            Sift_Down(0,0);
        }
        cout<<root;
    }
    int getMax(){
        return a[0];
    }

    void print(){
        for(long long i=0;i<a.size();i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

    void delete_element(long long k){
        int size = a.size()-1;
        if(k>size){
            // n--;
            cout<<-1;
        }
        else{
            cout<<a[k];
            swap(a[k], a[a.size()-1]);
            a.pop_back();
            // int i = a.size()-1;
            if(a[k] > a[parent(k)])
                Sift_Up(k);
            else
                heapify(k);
            // cout<<a.size();
            n++;
        }
        cout<<endl;
    }
};
int main(){

    MinHeap *min_heap = new MinHeap();
    
    cin>>n>>q;
    long long c = n;
    while(q--){
        int x;
        cin>>x;
        if(x==1){
            if(a.size()==0)
                cout<<-1;
            else{
                min_heap->extractMax();
                n++;
            }
            cout<<endl;
        }
        else if(x==2){
            long long k;
            cin>>k;
            if(a.size()==0){
                n = c;
            }    
            if(n==0) cout<<-1<<endl;
            else {
                min_heap->insert(k);
                n--;
            }
        }
        else if(x==3){
            long long k;
            cin>>k;
            if(k == 0)
                cout<<-1<<endl;
            else {
                min_heap->delete_element(k-1);
                // n++;
            }
        }
    }
    min_heap->print();
    
    return 0;
}
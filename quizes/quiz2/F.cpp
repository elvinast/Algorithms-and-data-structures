#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int a[100000];
int n;

class Node {
    public:
    int data;
    Node *left, *right;

    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void print(Node* node) {  
    if (node == NULL)  
        return;  
    cout << node->data << " ";  
    print(node->left);  
    print(node->right);  
} 


void quicksort(int l, int r) {
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
    if (l < j)
        quicksort(l, j);
    if (i < r)
        quicksort(i, r);
}

Node* balance(int l, int r) {  
    if (l > r)  
        return NULL;  
    int mid = (l + r)/2;  
    Node *root = new Node(a[mid]); 
    root->left = balance(l, mid - 1);  
    root->right = balance(mid + 1, r);  
    return root;  
}  


int main() {
    cin>>n;
    int k=pow(2,n)-1;
    for (int i = 0; i <k; i++){
        cin >> a[i];
    }
    quicksort(0, k - 1);
    int c = sizeof(a) / sizeof(a[0]);
    Node *root = balance(0, k-1);   
    print(root);
    return 0;
}
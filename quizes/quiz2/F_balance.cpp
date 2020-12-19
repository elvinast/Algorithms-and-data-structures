#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
//DONE
using namespace std;
vector <int> a;

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

class Node {
    public:
    int data;
    Node *right, *left;
    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void preorder(Node* node) {  
    if (node == NULL)  {
         return;  
    }
    cout << node->data << ' ';  

    preorder(node->left);
    preorder(node->right);
} 


Node* isBalanced(int l, int r) {  
    int m = (l + r) / 2;  
    Node *node = new Node(a[m]); 
    if (l > r)  
        return NULL;  
    else{
        node->left = isBalanced(l, m - 1);  
        node->right = isBalanced(m + 1, r); 
    }
    return node;  
}  

int main() {
    int x;
    cin >> x;
    int sizee = pow(2, x) - 1; //размер массива 2^n -1

    for (int i = 0; i < sizee; i++){
        int n;
        cin >> n;
        a.push_back(n);
    }
    quicksort(0, sizee - 1);
    Node *node = isBalanced(0, sizee - 1);   
    preorder(node);
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> v;

class Node{
    public: 
    int data, h;
    Node *left, *right;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

class BST{
    public:
    Node *root;
    int h;

    BST(){
        root = NULL;
        h = 1;
    }

    Node *insert(Node*node, int data){
        if (node == NULL){
            node = new Node(data);
            return node;
        }
        if(data != node->data){
            if (data <= node->data)
                node->left = insert(node->left, data);
            else  
                node->right = insert(node->right, data);
        }
            return node;
    }

    void inOrder(Node *node){
        if (node == NULL)
            return;
        inOrder(node->left);
        v.push_back(node->data);
        //cout << node->data << ' ';
        inOrder(node->right);
    }

    Node *findMin(Node *node){
        while(node->left != NULL)
            node = node->left;
        return node;
    }

    Node *findMax(Node *node){
        while(node->right == NULL){
            node = node->right;
        }
        return node;
    }
    

    Node *deleteNode(Node *node, int data){
        if (node == NULL)
            return NULL;
        if (data < node->data)
            node->left = deleteNode(node->left, data);
        else if (data > node->data)
            node->right = deleteNode(node->right, data);
        else{
            if (node->right == NULL && node->left == NULL)
                node = NULL;
            else if (node->left == NULL)
                node = node->right;
            else if (node->right == NULL)
                node = node->left;
            else {
                Node *temp = findMin(node->right);
                node->data = temp->data;
                node->right = deleteNode(node->right, temp->data);
            }
        }
        return node;
    }

    int height(Node *node){
        if (node == NULL)
            return 0;
        return max(height(node->right), height(node->left)) + 1;
        // if (rh < lh)
        //     return lh + 1;
        // else return rh + 1;
    }

    bool isBalanced(Node *node){
        if (node == NULL)
            return true;
        if (abs(height(node->right) -  height(node->left)) <= 1 &&
            isBalanced(node->right) && isBalanced(node->left))
            return true;
        return false;
    }
};

int main(){
    int x;
    BST *bst = new BST();
    int cnt = 0;
    while(cin >> x and x != 0){
        bst->root = bst->insert(bst->root, x);
        cnt++;
    }
    
    if (bst->isBalanced(bst->root) )
        cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
#include <iostream>
using namespace std;
//count nodes    

int cnt = 0;

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
        cout << node->data << endl;
        inOrder(node->right);
    }

    Node *findMin(Node *node){
        while(node->left != NULL)
            node = node->left;
        return node;
    }

    Node *findMax(Node *node){
        while(node->right != NULL)
            node = node->right;
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

    int countNodes(Node *node){
        if (node != NULL){
            countNodes(node->left);
            cnt++;
            countNodes(node->right);
        }
        return cnt;
    }
};

int main(){
    int x;
    BST *bst = new BST();
    while(cin >> x and x != 0){
        bst->root = bst->insert(bst->root, x);
    }
    // cout << bst->findMax(bst->root)->data << endl;

    cout << bst->countNodes(bst->root) << endl;
    // bst->inOrder(bst->root);
    return 0;
}
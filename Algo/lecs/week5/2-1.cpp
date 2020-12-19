#include <iostream>
using namespace std;
class Node{
    public:
    Node *left, *right;
    int data;

    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

class BST{
    public:
    Node *root;

    BST(){
        root = NULL;
    }

    Node *insert(Node *node, int data){
        if(node == NULL){
            node = new Node(data);
            return node;
        }
        if(data != node->data){
            if(data<=node->data){
                node->left = insert(node->left, data);
            }
            else node->right = insert(node->right, data);
        }
        return node;
    }

    Node *findMax(Node *node){
        Node *new_node;
        if(node == NULL)
            return NULL;
        while(node->right!=NULL){
            new_node = node;
            node = node->right;
        }
        
        if(node->right == NULL && node->left != NULL) {
            new_node = node->left;
            findMax(new_node->right);

        }
        return new_node;
    }
};
int main(){

    BST *bst = new BST();

    int n;
    while(cin>>n){
        if(n==0){
            break;
        }
        else{
            bst->root = bst->insert(bst->root, n);
        }

    }
    Node *secondMax = bst->findMax(bst->root);
    cout<<secondMax->data;

    return 0;
}
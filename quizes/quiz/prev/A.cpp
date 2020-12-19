#include <iostream>
using namespace std;

class Node{
    public:
    Node *left, *right;
    int data;

    Node (int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
int res = 0;
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
        if(data <= node->data)
            node->left = insert(node->left, data);
        else
            node->right = insert(node->right, data);
        return node;
    }

    int vert(Node *node){

        if(node == NULL)
            return 0;
        if(node->left != NULL && node->right != NULL){
            res++; //postorder
            vert(node->left);
            vert(node->right);
        }
        if(node->right != NULL && node->left == NULL)
            vert(node->right);
        else if(node->right == NULL && node->left != NULL)
            vert(node->left);
        return res;
    }

};
int main(){
    BST *bst = new BST();
    int n, z;
    cin >> n;
    while (n > 0){
        cin >> z;
        bst->root = bst->insert(bst->root, z);
    }
    cout << bst->vert(bst->root) << endl;;
    return 0;
}
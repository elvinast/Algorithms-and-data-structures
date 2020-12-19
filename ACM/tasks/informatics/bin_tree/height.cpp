//высота дерева

#include <iostream>
using namespace std;

    typedef struct _node{
        int key, h;
        struct _node *left, *right;
    } node;
    
    node *crnode(int val){
        node* nnode = (node*) malloc(sizeof(node));
        nnode->key = val;
        nnode->right = NULL;
        nnode->left = NULL;
        nnode->h = 1;
        return nnode;  
    }

    int height(node *root){
        if (root) return root->h;
        return 0;
    }

    void update(node *root){
        root->h = max(height(root->left),height(root->right))+1;
    }

    node *addTree(node *root, int val){
        if (NULL == root) root = crnode(val);
        if (val < root->key){
            if (NULL == root->left) root->left = crnode(val);
            else addTree(root->left, val);
        }
        if (val > root->key){
            if (NULL == root->right) root->right = crnode(val);
            else addTree(root->right, val);
        }
        update(root);
        return root;
    }

    node* findTree(node *root, int val){
        if (NULL == root) return NULL;
        if (val == root->key) return root;
        if (val < root->key) return findTree(root->left, val);
        return findTree(root->right, val);  // if val > root->key 
    }

    int rightmost(node *root){
        while (root->right != NULL) root = root->right;
        return root->key;
    }

    node* deleteTree(node *root, int val){
        if (root->key == val){
            if (NULL == root->left && NULL == root->right){
                free(root);
                return NULL;
            }
            if (NULL == root->right && root->left != NULL){
                node *temp = root->left;
                free(root);
                return temp;
            }
            if (NULL == root->left && root->right != NULL){
                node *temp = root->right;
                free(root);
                return temp;
            }
            root->key = rightmost(root->left);
            root->left = deleteTree(root->left, root->key);
            return root;
        }
        if (val < root->key) {
            root->left = deleteTree(root->left, val);
            return root;
        }
        if (val > root->key) {
            root->right = deleteTree(root->right, val);
            return root;
        }
        return root;
    }

    void printTree(node *root){
        if (root != NULL){
            printTree(root->left);
            cout << root->key << " ";
            cout << root->right << " ";
        }
    }

    int cnt = 0;

    int countnodes(node *root){
            if(root != NULL){
                countnodes(root->left);
                cnt++;
                countnodes(root->right);
            }
            return cnt;
        }    

    int main(){
        node *tree = NULL;
        int x;
        int cnt = 0;
        while(cin >> x and x != 0){
            tree = addTree(tree, x);
            
        }
        cout << height(tree) << endl;
        return 0;
    }
    

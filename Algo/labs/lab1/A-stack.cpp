#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

class Stack{
    public:
    Node *top;
    int sizee;

    Stack(){
        top = NULL;
        sizee = 0;
    }

    void push(int data){
        Node *node = new Node(data);
        node->next = top;
        top = node;
        sizee++;
    }

    void pop(){
        if (top != NULL){
            top = top->next;
            sizee--;
        }
    }
    int size(){
        return this->sizee;
    }

    bool empty(){
        return this->sizee == 0;
    }
    
    void clear(){
        this->sizee = 0;
    }
    
    int back(){
        return top->data;
    }
};

int main(){
    Stack *st = new Stack();
    while (true){
        string s;
        cin >> s;
        if (s == "size"){
            cout << st->size() << endl;
        }
        else if (s == "push"){
            int x;
            cin >> x;
            st->push(x);
            cout << "ok" << endl;
        }
        else if (s == "clear"){
            Stack *st1 = new Stack();
            swap(st, st1);
            // st->clear();
            cout << "ok" << endl;
        }
        else if (s == "exit"){
            cout << "bye" << endl;
            return 0;
        }
        else if(s == "pop"){
            if (st->sizee == 0){
                cout << "error" << endl;
            }
            else{
                cout << st->top->data << endl;
                st->pop();
            }
        }
        else if (s == "back"){
            if (st->sizee == 0){
                cout << "error" << endl;
            }
            else cout << st->back() << endl;
        }
    }

    return 0;
}
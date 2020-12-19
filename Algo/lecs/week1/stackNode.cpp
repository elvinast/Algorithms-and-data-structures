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
};

int main(){
    Stack *st = new Stack();
    st->push(20);
    st->push(30);
    st->push(40);
    cout << st->top->data << endl;
    st->pop();
    cout << st->top->data << endl;
    cout << st->size() << endl;
    cout << st->empty() << endl;
    st->pop();
    st->pop();
    cout << st->empty() << endl;

    return 0;
}
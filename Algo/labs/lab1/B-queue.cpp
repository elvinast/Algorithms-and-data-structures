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

class Queue{
    public:
    Node *head;
    Node *rear;
    int sizee;

    Queue(){
        rear = NULL;
        head = NULL;
        sizee = 0;
    }
    void push(int data){
        Node *node = new Node(data);
        if (sizee == 0){
            head = rear = node;
        }
        else {
            rear->next = node;
            rear = node;
        }
        sizee++;
    }

    void pop(){
        head = head->next;
        sizee--;
    }

    int size(){
        return this->sizee;
    }

    bool empty(){
        return (rear == NULL && head == NULL);
    }
};

int main(){
    Queue *st = new Queue();
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
            Queue *st1 = new Queue();
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
                continue;
            }
            else{
                if (st->head != NULL){
                    cout << st->head->data << endl;
                }
                else if (st->head == NULL && st->rear != NULL){
                    cout << st->rear->data << endl;
                }
                st->pop();
            }
        }
        else if (s == "front"){
            if (st->sizee == 0){
                cout << "error" << endl;
            }
            else cout << st->head->data << endl;
        }
    }
    return 0;
}
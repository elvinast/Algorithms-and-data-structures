#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *prev;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Deque{
    public:
    Node *head;
    Node *rear;
    int sizee;

    Deque(){
        rear = NULL;
        head = NULL;
        sizee = 0;
    }

    void push_front(int data){
        Node *node = new Node(data);
        if (sizee == 0){
            head = rear = node;
        }
        else {
            node->next = head;
            head->prev = node;
            head = head->prev;
        }    
        sizee++;
    }

    void push_back(int data){
        Node *node = new Node(data);
        if (sizee == 0){
            head = rear = node;
        }
        else{
            node->prev = rear;
            rear->next = node;
            rear = rear->next;
        }
        sizee++;
    }

    void pop_front(){
        
        if (head == NULL) 
            rear = NULL; 
        else{
            head = head->next;
        }
            
        sizee--;
    }

    void pop_back(){
        if (rear == NULL){
            head = NULL;
        }
        else {
            rear = rear->prev;
        }
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
    Deque *st = new Deque();
    while (true){
        string s;
        cin >> s;
        if (s == "size"){
            cout << st->size() << endl;
        }
        else if (s == "push_front"){
            int x;
            cin >> x;
            st->push_front(x);
            cout << "ok" << endl;
        }
        else if (s == "push_back"){
            int x;
            cin >> x;
            st->push_back(x);
            cout << "ok" << endl;
        }
        else if (s == "clear"){
            Deque *st1 = new Deque();
            swap(st, st1);
            cout << "ok" << endl;
        }
        else if (s == "exit"){
            cout << "bye" << endl;
            return 0;
        }
        else if(s == "pop_back"){
            if (st->sizee == 0){
                cout << "error" << endl;
                continue;
            }
            else{
                if (st->rear == NULL)
                    cout << st->head->data << endl;
                else cout << st->rear->data << endl;
                st->pop_back();
            }
        }
        else if(s == "pop_front"){
            if (st->sizee == 0){
                cout << "error" << endl;
                continue;
            }
            else {
                if (st->head == NULL)
                    cout << st->rear->data << endl;
                else cout << st->head->data << endl;
            }
                st->pop_front();
        }

        else if (s == "front"){
            if (st->sizee == 0){
                cout << "error" << endl;
            }
            else {
                if (st->head == NULL)
                    cout << st->rear->data << endl;
                else cout << st->head->data << endl;
            } 
        }
        else if (s == "back"){
            if (st->sizee == 0){
                cout << "error" << endl;
            }
            else {
                if (st->rear == NULL)
                    cout << st->head->data << endl;
                else cout << st->rear->data << endl;
            } 
        }
    }
    return 0;
}
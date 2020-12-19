#include <iostream>

using namespace std;

class Node {
    public:
    int data;
    Node *next, *prev;

    Node(int data) {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

class LinkedList {
    public:
    Node *front, *tail;

    LinkedList() {
        front = NULL;
        tail = NULL;
    }

    void push_back(int data) {
        Node *node = new Node(data);
        if (tail == NULL) {
            front = node;
            tail = node;
        }
        else {
            tail->next = node;
            node->prev = tail;
            tail = node;
        }
    }

    void push_front(int data) {
        Node *node = new Node(data);
        if (front == NULL) {
            front = node;
            tail = node;            
        }
        else {
            node->next = front;
            front->prev = node;
            front = node;
        }
    }

    void pop_back() {
        if (tail == NULL)
            return;
        tail = tail->prev;
        if (tail != NULL)
            tail->next = NULL;
        else
            front = NULL; 
    }

    void pop_front() {
        if (front == NULL)
            return;
        front = front->next;
        if (front != NULL)
            front->prev = NULL;
        else 
            tail = NULL;
    }

    void print() {
        Node *node = front;
        while (node != NULL) {
            cout << node->data << " ";
            node = node->next;
        }
        cout << endl;
    }

    int find_node(int data) {
        Node *cur = front;
        int cnt = 0;
        while (cur != NULL) {
            if (cur->data == data)
                cnt++;
            cur = cur->next;            
        }
        return cnt;
    }

    int getNth(int index){
        int cnt = 0;
        Node *current = front;
        while (current != NULL){
            if (cnt == index)
                return(current->data);
            cnt++;
            current = current->next;
        }
        return cnt;
    }

    void insert_node(Node *a, int data) {
        if (a == tail) 
            push_back(data);
        else {
            Node *b = a->next;
            Node *node = new Node(data);
            a->next = node;
            node->prev = a;
            node->next = b;
            b->prev = node;
        }
    }

    void delete_node(Node *node) {
        if (node == tail)
            this->pop_back();
        else if (node == front)
            this->pop_front();
        else {
            Node *a = node->prev;
            Node *b = node->next;
            a->next = b;
            b->prev = a;
        }
    }
};

int main() {
    LinkedList *ll = new LinkedList();
    int sz;
    cin >> sz;
    while(sz != 0){
        string s;
        cin >> s;
        if (s == "exit") return 0;
        else if (s == "insertFirst"){
            int x;
            cin >> x;
            ll->push_front(x);
        }
        else if (s == "insertLast"){
            int x;
            cin >> x;
            ll->push_back(x);
        }
        else if (s == "getNth"){
            int x;
            cin >> x;
            cout << ll->getNth(x) << endl;
        }
        else if (s == "cnt"){
            int x;
            cin >> x;
            cout << ll->find_node(x)<< endl;
        }
        sz--;
    }
    
    // ll->push_back(5); 
    // ll->push_back(10);
    // ll->push_front(20);
    // ll->push_front(30);
    // ll->print(); // 30 20 45 5 10
    // // Node *node = ll->find_node(20);
    // // if (node != NULL) {
    // //     ll->insert_node(node, 45);
    // //     ll->print();
    // // }
    // // node = ll->find_node(5);
    // delete node;
    // ll->delete_node(node);
    // ll->print();

    return 0;
}
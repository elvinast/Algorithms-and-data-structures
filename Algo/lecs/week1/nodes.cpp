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

    // void change_data(int p){
    //     this->data += p;
    // }
};

int main(){
    Node *n1 = new Node(10);
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);

    n1->next = n2;
    n2->next = n3;

    cout << "n1 = " << n1 << endl;
    cout << "n2 = " << n2 << endl;
    cout << "n3 = " << n3 << endl; // адреса

    cout << "n1->next = " << n1->next << endl;
    cout << "n2->next = " << n2->next << endl;
    cout << "n3->next = " << n3->next << endl; // null = 0x0

    cout << (n1->next->next)->data << endl; //30

    return 0;
}
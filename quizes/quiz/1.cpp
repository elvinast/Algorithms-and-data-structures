#include <iostream>
using namespace std;

struct Node {
	string word;
	Node* next;

	Node() {}

	Node(string word) {
		this->word = word;
		this->next = NULL;
	}
};

// your code goes here

Node* cyclicShift(Node* head, int k) {
    Node *cur = head;
    int cnt = 1;
    if (k == 0)
		return NULL;
    while (cnt < k){
        if (cur != NULL){
            cur = cur->next;
			// cout << cur->word << ' ';
            cnt++;
        }
		else
			return NULL;
    }
    Node* node = cur;
	// cout << cur->word << ' ' << head->word << ' ' << node->word << endl;
    while (cur->next != NULL) {
		// cout << cur->word << endl;
        cur = cur->next;
    }

    cur->next = head;
    head = node->next;
    node->next = NULL;
    return head;
}

void print(Node* head) {
	Node* cur = head;
	while (cur != NULL) {
		cout << cur->word << " ";
		cur = cur->next;
	}
	cout << endl;
}

int main() {
	int n; cin >> n;
	int k; cin >> k;
	Node* head;
	Node* cur;
	for (int i = 0; i < n; i++) {
		string word; cin >> word;
		if (i == 0) {
			head = new Node(word);
			cur = head;
		} else {
			cur->next = new Node(word);
			cur = cur->next;
		}
	}

	head = cyclicShift(head, k);
	print(head);
}
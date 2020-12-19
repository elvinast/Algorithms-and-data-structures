#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#define ll long long

const int N = 26;
using namespace std;

class Node{
    public:
    char value;
    Node *ch[26];
    Node(char value){
        this->value = value;
        for(int i = 0; i < N; i++)
            ch[i] = NULL;
    }
};

class Trie {
    public:
    Node *root;
    int cnt;
    Trie() {
        root = new Node(' ');
        cnt = 0;
    }

    void insert(string s) {
        Node *cur = root;
        for (int i = 0; i < s.size(); i++) {
            if (cur->ch[s[i] - 'a'] != NULL)
                cur = cur->ch[s[i] - 'a'];
            else {
                Node *node = new Node(s[i]);
                cur->ch[s[i] - 'a'] = node;
                cur = node;
                cnt++;
            }
        }
    }
};

int main() {
    string s;
    cin >> s;
    Trie *trie = new Trie();
    for (int i = 0; i < s.size(); i++) { // abab
        trie->insert(s.substr(i));
    }
    cout << trie->cnt;
    return 0;
}
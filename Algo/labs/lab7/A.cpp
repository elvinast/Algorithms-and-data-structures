#include <iostream>
#include <cmath>
typedef long long ll;
using namespace std;

int m;

class Node {
public:
    char value;
    Node *ch[10];
    int temp;
    string c;
    Node(char value, string c) {
        this->c = c;
        this->value = value;
        for (int i = 0; i < 10; i++)
            ch[i] = NULL;
        temp = 1;
    }
};

class Trie {
public:
    Node *root;
    int m;
    Trie (int m) {
        this->m = m;
        root = new Node(' ', " ");
    }

    void insert(string s, string c) {
        Node *cur = root;
        for (int i = 0; i < s.size(); i++) {
            if (cur->ch[s[i] - '0'] != NULL) {
                cur = cur->ch[s[i] - '0'];
                cur->temp++;
            }
            else {
                if (i != s.size() - 1){
                    Node *node = new Node(s[i], " ");
                    cur->ch[s[i] - '0'] = node;
                    cur = node;
                }   
                else if (i == s.size() - 1){
                    Node *node = new Node(s[i], c);
                    cur->ch[s[i] - '0'] = node;
                    cur = node;
                }       
            }
        }
    }
    
    int search(Node *node, string s) {
        int cnt = 0;
        if (node->c == " ") {
            for (int i = 0; i < 10; i++)
                if (node->ch[i] != NULL)
                    cnt += search(node->ch[i], s + node->ch[i]->value);
            return cnt;
        }
        else {
            cnt = pow(10, m - s.size());
            for (int i = 0; i < 10; i++)
                if (node->ch[i] != NULL)
                    cnt -= search(node->ch[i], s + node->ch[i]->value);
            cout << node->c << " " << cnt << '\n';
            cnt = pow(10, m - s.size());
            return cnt;
        }
    }
};

void solve(){
    int n;
    cin >> n >> m;
    Trie *trie = new Trie(m);
    while (n > 0) {
        string num, c;
        cin >> num >> c;
        trie->insert(num, c);
        n--;
    }
    trie->search(trie->root, "");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
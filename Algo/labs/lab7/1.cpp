#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#define ll long long
#define pb push_back
#define f first
#define sec second
#define see(i) cout << i << endl
#define look(i) cout << i << " " 
#define look_pair(i) cout << i.first << " " << i.second << endl
using namespace std;

int m;
const int N = 26;
using namespace std;

class Node{
    public:
    char value;
    Node *ch[26];
    int t;
    string c;
    Node(char value, string c){
        this->c = c;
        this->value = value;
        for(int i = 0; i < N; i++)
            ch[i] = NULL;
        t = 1;
    }
};

class Trie {
    public:
    Node *root;
    int temp;
    Trie(int temp) {
        root = new Node(' ', " ");
        // temp = 0;
    }

    void insert(string s, string c) {
        Node *cur = root;
        for (int i = 0; i < s.size(); i++) {
            if (cur->ch[s[i] - '0'] != NULL){
                cur = cur->ch[s[i] - '0'];
                cur->t++;
            }
            else {
                if (i != s.size() - 1){
                    Node *node = new Node(s[i], " ");
                    cur->ch[s[i] - '0'] = node;
                    cur = node;
                    // temp++;
                }   
                else if (i == s.size() - 1){
                    Node *node = new Node(s[i], c);
                    cur->ch[s[i] - '0'] = node;
                    cur = node;
                    // temp++;
                }
                    
            }
        }
    }
    
    int find(Node *node, string s, int t = 0) {
        if (node->c == " ") {
            for(int i = 0; i < 26; i++){
                if (node->ch[i] != NULL){
                    t += find(node->ch[i], s + node->ch[i]->value);
                }
            }
            return t;
        }
        else {
            t = pow(10, m - s.size());
            for(int i = 0; i < 26; i++){
                if (node->ch[i] != NULL)
                    t += find(node->ch[i], s + node->ch[i]->value);
            }
            cout << node->c << " " << t << endl;
            t = pow(10, m - s.size());
            return t;
        }
    }
};

void solve(){
    int n; cin >> n >> m;
    Trie *trie = new Trie(m);
    while(n > 0){
        string num, c; cin >> num >> c;
        trie->insert(num, c);
        n--;
    }
    trie->find(trie->root, "");
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.precision(20);
    solve();
    return 0;
}
const int N = 26;
class Node{
    public:
    char value;
    Node *ch[N];
    bool found = false;
    Node(char value){
        this->value = value;
        for(int i=0;i<N;i++){
            ch[i] = NULL;
        }
    }
};

class Trie {
public:
    / Initialize your data structure here. */
    Node *root;
    Trie() {
        root = new Node(' ');
    }
    
    / Inserts a word into the trie. */
    void insert(string word) {
        Node *cur = root;
        for(int i=0;i<word.length();i++){
            if(cur->ch[word[i]-'a']!=NULL){
                cur = cur->ch[word[i]-'a'];
            }
            else{
                Node *node = new Node(word[i]);
                cur->ch[word[i]-'a'] = node;
                cur = node;
            }
        }
        cur->found = true;
        
    }
    
    / Returns if the word is in the trie. */
    bool search(string word) {
        Node *cur = root;
        for(int i=0;i<word.length();i++){
            if(cur->ch[word[i]-'a']==NULL)
                return false;
            cur = cur->ch[word[i]-'a'];
        }
        return (cur!=NULL && cur->found);
        
        
    }
    
    / Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Node *cur = root;
        for(int i=0;i<prefix.length();i++){
            if(cur->ch[prefix[i]-'a']==NULL)
                return false;
            cur = cur->ch[prefix[i]-'a'];
        }
        return (cur!=NULL);
    }
};
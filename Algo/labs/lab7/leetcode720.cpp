class TrieNode {
public:
    unordered_map<char, TrieNode*> mp;
    bool isEnd;
    
    TrieNode() {
        this->isEnd = false;
    }
};

class Solution {
public:
    string longestWord(vector<string>& words) {
        TrieNode *root = new TrieNode();
        for(string s: words) {
            insert(root, s);
        }
        
        string ans;
        for(string s: words) {
            if(ans.size() > s.size()) continue;
            if(search(root, s)) {
                if(ans.size() == s.size()) ans = min(s, ans);
                else ans = s;
            }
        }
        return ans;
    }
    
    void insert(TrieNode *root, string s){
        TrieNode *curr = root;
        for(char c: s){
            if(curr->mp.find(c) == curr->mp.end()) 
                curr->mp[c] = new TrieNode();
            curr = curr->mp[c];
        }
        curr->isEnd = true;
    }
    
    bool search(TrieNode *root, string s){
        int count = 0;
        TrieNode *curr = root;
        for(char c: s){
            curr = curr->mp[c];
            if(curr->isEnd) ++count;
        }
        return count == s.size();
    }
};
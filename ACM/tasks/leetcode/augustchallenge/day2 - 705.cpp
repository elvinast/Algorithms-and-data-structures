class MyHashSet {
public:
    /** Initialize your data structure here. */
    vector <int> v;
    MyHashSet() {
        
    }
    
    void add(int key) {
        v.push_back(key);
    }
    
    void remove(int key) {
        v.erase(std::remove(v.begin(), v.end(), key), v.end());
        }
    
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        for(int i = 0; i < v.size(); i++) if (v[i] == key) return true;
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
class MyHashSet {
public:
    static const int CAPACITY = 10007;
    vector<list<int>>set;  

    MyHashSet() {
        set.resize(CAPACITY);  
    }
    int hash(int key){
        return key%CAPACITY;
    }
    
    void add(int key) {
        int index = hash(key);
        auto& bucket = set[index];
        for(auto entry: bucket){
            if(entry == key)
                return;
        }
        bucket.push_back(key);
        
    }
    
    void remove(int key) {
        int index = hash(key);
        auto& bucket = set[index];
        for(auto iterator{bucket.begin()};iterator!=bucket.end();iterator++){
            if(*iterator == key){
                bucket.erase(iterator);
                return;
            }
        }
    }
    
    bool contains(int key) {
        int index = hash(key);
        auto& bucket = set[index];
        for(auto entry: bucket){
            if(entry == key)
                return true;
        }
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
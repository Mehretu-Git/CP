class MyHashMap {
public:
    const int CAPACITY = 10007;
    vector<list<pair<int,int>>>table;
    MyHashMap() {
        table.resize(CAPACITY);
    }
    int hash(int key){
        return key%CAPACITY;
    }
    void put(int key, int value) {
        int index = hash(key);
        auto& bucket = table[index];
        for(auto& entry: bucket){
            if(entry.first == key){
                entry.second = value;
                return;
            }
        }
        bucket.push_back({key,value});
    }
    
    int get(int key) {
        int index = hash(key);
        auto& bucket = table[index];
        for(auto& entry: bucket){
            if (entry.first == key)
                return entry.second;
        }
        return -1;
    }
    
    void remove(int key) {
        int index = hash(key);
        auto& bucket = table[index];
        for(auto& entry: bucket){
            if (entry.first == key)
                entry.second = -1;
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
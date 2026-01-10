class LRUCache {
private:
    struct Node{
        int key,value;
        Node* prev;
        Node* next;
        Node(int k,int v) : key(k),value(v),prev(nullptr),next(nullptr){}
    };
    unordered_map<int,Node*>cache;
    int size;
    //dummy nodes at the head and tail of the linked list
    Node *head;
    Node *tail;
    void move_to_head(Node* node){
        remove(node);
        add_to_head(node);  
    }
    void remove(Node* node){
        //precondition: receives node to be removed
        //postcondition: removes the node given as an arguement from the list
        Node* p = node->prev;
        Node* n = node->next;
        p->next = n;
        n->prev = p;
    }
    void add_to_head(Node* node){
        //precondition: receives a node 
        //postconditioin: insert that node to the head of the list
        Node* old_first = head->next;
        node->next = old_first;
        node->prev = head;
        head->next = node;
        old_first->prev = node;
    }
public:
    LRUCache(int capacity) {
        size = capacity;
        head = new Node(-1,-1);
        tail = new Node(-1,-1);
        head->next = tail;
        tail->prev = head; 

    }
    
    int get(int key) {
        //precondition: integer key is passed to the parameter
        //postcondition: if that key is in our cache return the value of the node and move that node to the top 
        //of the list.
        if(!cache.count(key)) return -1;
        else{
            Node* res = cache[key];
            move_to_head(res);
            return res->value;
        }
    }
    
    void put(int key, int value) {
        if(cache.count(key)){
            cache[key]->value = value;
            move_to_head(cache[key]);
        }
        else{
            if(size==cache.size()){
                //pop the last element.
                Node* last = tail->prev;
                cache.erase(last->key);
                remove(last);
                delete last;
            }
            Node* new_node = new Node(key,value);
            add_to_head(new_node);
            cache[key] = new_node;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
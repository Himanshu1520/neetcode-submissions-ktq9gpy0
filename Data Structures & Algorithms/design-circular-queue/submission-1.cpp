class MyCircularQueue {
public:
        private:
            struct Node{
                int val;
                Node* next;
                Node(int x): val(x),next(nullptr){}
            };

            Node* front;
            Node* rear;
            int size=0;
            int capacity;

        public:
    MyCircularQueue(int k) {
            front=rear=nullptr;
            size=0;
            capacity=k;
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;

        Node* newNode= new Node(value);
        if(isEmpty()){
            front=rear=newNode;
            rear->next=front;;
        }
        else{
            rear->next=newNode;
            rear=newNode;
            rear->next=front;
        }
        size++;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()){
            return false;
        }
        else{
            Node* temp=front;
            front=front->next;
            rear->next=front;
            delete temp;
        }
        size--;
        return true;
    }
    
    int Front() {
        if(isEmpty()) return -1;
        return front->val;
    }
    
    int Rear() {
        if(isEmpty()) return -1;
        return rear->val;
    }
    
    bool isEmpty() {
        return size==0;
    }
    
    bool isFull() {
        return size==capacity;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
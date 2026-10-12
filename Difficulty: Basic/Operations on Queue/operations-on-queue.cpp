class MyQueue {
    // define your queue
    queue <int> q;
    int count = 0;

  public:
    void enqueue(int x) {
        q.push(x);
        count = count + 1;
        
    }

    void dequeue() {
        q.pop();
        count = count - 1;
    }

        
    int getFront() {
        int z = q.front();
        return z;
    }
        

    int getRear() {
        if(q.empty()) return -1;
        return q.back();
        
    }

    bool isEmpty() {
        return q.empty();
    }

    int size() {
        return count;
    }
};
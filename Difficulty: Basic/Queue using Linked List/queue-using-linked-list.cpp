class Node {
	public:
	int data;
	Node* next;
	
	Node(int val) {
		data = val;
		next = nullptr;
	}
};

class myQueue {
	Node* head;
	Node* tail;
	int count;
	public:
	myQueue() {
		
		head = tail = NULL;
		count = 0;
	}
	
	bool isEmpty() {
		return head == NULL;
	}
	
	void enqueue(int x) {
		// Adds an element x at the rear of the queue
		Node* newNode = new Node(x);
		if (isEmpty()) {
			head = tail = newNode;
		}
		else {
			tail -> next = newNode;
			tail = newNode;
		}
		count = count + 1;
	}
	
	void dequeue() {
		if (isEmpty())
			return ;
		Node* temp = head;
		head = head -> next;
		delete(temp);
		count = count - 1;
		
	}
	
	int getFront() {
		if (isEmpty()) {
			return - 1;
		}
		return head -> data;
	}
	
	int size() {
		return count;
	}
};

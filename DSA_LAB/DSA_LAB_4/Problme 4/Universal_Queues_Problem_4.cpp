template <typename T>
class Node{
	public :
		T data;
		Node<T> *next;
		
		Node(T data){
			this -> data = data;
			next = NULL;
		}
};

template <typename T>
class Queue{
	Node<T> *head;
	Node<T> *tail;
	int size;
	
	public:
		Queue(){
			head = NULL;
			tail = NULL;
			size = 0;
		}
		
		int getSize(){
			return size;
		}
		
		bool isEmpty(){
			return size == 0;
		}
		
		T enqueue(T element){
			if(head == NULL){
				Node<T> *newnode =  new Node<T>(element);
				head = newnode;
				tail = newnode;
			}
			else{
			Node<T> *newnode =  new Node<T>(element);
			tail -> next = newnode;
			tail = newnode;
			}
			size++;
		}
		
		T front(){
			if(isEmpty()){
				return -1;
			}
//			T ans = head->data;
			return head -> data;
		}
		T dequeue(){
			if(isEmpty()){
				return -1;
			}
			else{
				T ans = head -> data;
				Node<T> *temp = head;
				head = head -> next;
				delete temp;
				size--;
				return ans;
			}
		}
		
};
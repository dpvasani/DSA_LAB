#include <iostream>
using namespace std;

template <typename T>
class Node {
   public:
    T data;
    Node *next;

    Node(T data) {
        this->data = data;
        next = NULL;
    }
};

template <typename T>
class Stack {
	// Define the data members
    Node<T> *head;
    int size;
   public:
    Stack() {
        // Implement the Constructor
        head = NULL;
        size = 0;
    }

	/*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function
        return size;
    }

    bool isEmpty() {
        // Implement the isEmpty() function
        if(size == 0){
            return true;
        }
        else{
            return false;
        }
    }

    void push(T element) {
        // Implement the push() function
        Node<T>* newnode = new Node<T>(element);
        if(head == NULL){
            head = newnode;
        }
        else{
            newnode -> next = head;
            head = newnode;
        }
        size++;
        return;
    }

    T pop() {
        // Implement the pop() function
        if(size == 0){
            return -1;
        }
        T ans = head -> data;
        head = head -> next;
        size--;
        return ans;
    }

    T top() {
        // Implement the top() function
        if(size == 0){
            return -1;
        }
        return head -> data;
    }
};
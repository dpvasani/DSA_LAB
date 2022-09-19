#include <iostream>
using namespace std;

class Node {
   public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        next = NULL;
    }
};


class Stack {
	// Define the data members
    Node *head;
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

    void push(int element) {
        // Implement the push() function
        Node* newnode = new Node(element);
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

    int pop() {
        // Implement the pop() function
        if(size == 0){
            return -1;
        }
        int ans = head -> data;
        head = head -> next;
        size--;
        return ans;
    }

    int top() {
        // Implement the top() function
        if(size == 0){
            return -1;
        }
        return head -> data;
    }
};
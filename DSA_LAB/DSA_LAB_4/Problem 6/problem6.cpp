#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
	public:
		int data;
		node* next;
		node(int val){
			data = val;
			next = NULL;
		}
};
class Dequeue{
	node* front;
	node* back;
	public:
	Dequeue(){
		front = NULL;
		back = NULL;
	}
	void push_front(int value){
		node* new_node = new node(value);
		if(front==NULL){
			back = new_node;
			front = new_node;
			return;
		}
		new_node->next = front;
		front = new_node;
	}
	void pop_front(){
		if(front==NULL){
			cout<<"Queue is Empty:";
			return;
		}
		
		front = front->next;
		 
	}
		void push_back(int value){
		node* temp = front;
		node* new_node = new node(value);
		if(front==NULL && back==NULL){
			back = new_node;
			front = new_node;
			return;
		}
		else{
		
		while(temp->next!=NULL){
		temp= temp->next;
		}
			temp->next = new_node;
		}
	}
	void pop_back(){
		
		if(front==NULL && back ==NULL){
			cout<<"Queue is Empty:";
			return;
		}
		
		node* temp=front;
	
   while(temp->next->next!=NULL){
    temp = temp->next;
}
     temp->next = NULL;
		
		 
	}
	void display() {
   node* temp = front;
   if(front==NULL)
   cout<<"Dequeue is empty";
   else {
      
      while (temp != NULL) {
         cout<< temp->data <<" ";
         temp = temp->next;
      }
   }
   cout<<endl;
}

};
int main(){
	Dequeue dq1;
	dq1.push_front(8);
	dq1.push_front(6);
	dq1.push_back(1);
	dq1.push_back(2);
	
	
	dq1.pop_back();

	dq1.pop_front();
	
	dq1.display();
	return 0;
}

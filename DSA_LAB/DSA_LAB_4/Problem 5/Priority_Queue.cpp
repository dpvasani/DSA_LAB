//template <typename T>
#include <bits/stdc++.h>
class item{
	public :
	    int value;
	    int priority;

};

//template <typename T>
item pointer[1000];


	int size = -1;
	
//	public:
		void enqueue(int value, int priority){
			size++;
			
			pointer[size].value = value;
			pointer[size].priority = priority;
			
		}
		
		int peek(){
			int highestPriority = INT_MIN;
			int ind = -1;
			
			for(int i = 0; i <= size; i++){
				if(highestPriority == pointer[i].priority && ind > -1 && pointer[ind].value < pointer[i].value){
					highestPriority = pointer[i].priority;
					ind = i;
				}
				else if(highestPriority < pointer[i].priority){
					highestPriority = pointer[i].priority;
					ind = i;
				}
			}
			return ind;
			}
			
			void dequeue(){
				int ind = peek();
				
				for(int i = ind; i < size; i++){
					pointer[i] = pointer[i+1];
				}
				size--;
			}

//class PriorityQueue{
//
//		
//};

#include <bits/stdc++.h>
using namespace std;

//#include "Priority_Queue.cpp"

int main(){
	enqueue(10, 2);
	enqueue(14, 4);
	enqueue(16, 4);
	enqueue(12, 3);
	
	int ind = peek();
	cout << ind << endl;
	cout << pointer[ind].value << endl;
    
	
	dequeue();
	
	ind = peek();
	cout << ind << endl;
	cout << pointer[ind].value<< endl;
	
	dequeue();
	ind = peek();
	cout << ind << endl;
	cout << pointer[ind].value<< endl;
	
}
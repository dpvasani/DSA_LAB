#include<bits/stdc++.h>
using namespace std;
struct Node
{
    public:
    int data;
    Node* link;
    Node(int data){
        this->data = data;
        link=NULL;
    }
};

Node* linsatbeg(Node* Head,int element){
    Node* ptr = new Node(element);
    ptr->link = Head;
    return ptr;
}


int main()
{
    int t;
    cout << "ENTER THE ELEMENT THAT IS TO BE INSERTED AT THE BEGINNING:";
    cin >> t;
    Node* Head = new Node(1);
    Node* Second = new Node(2);
    Node* Third = new Node(3);
    Node* Fourth = new Node(4);
    Head->link = Second; 
    Second->link = Third; 
    Third->link = Fourth; 
    Fourth->link = NULL;
    
    Node* Temp = linsatbeg(Head,t);
    while (Temp != NULL)
    {
        cout << Temp->data << " ";
        Temp = Temp->link;
    }
    return 0;
}
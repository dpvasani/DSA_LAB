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


int linsatend(Node* Head,int element){
    Node* ptr = new Node(element);
    ptr->link = NULL;
    if (Head == NULL)
    {
        Head = ptr;
    }
    else{
        Node* temp = Head;
        while (temp->link != NULL)
        {
            temp = temp->link;
        }
        temp->link = ptr;
    }

}


int main()
{
    int t;
    cout << "ENTER THE ELEMENT TO BE APPENDED:";
    cin >> t;
    Node* Head = new Node(1);
    Node* Second = new Node(2);
    Node* Third = new Node(3);
    Node* Fourth = new Node(4);
    Head->link = Second; 
    Second->link = Third; 
    Third->link = Fourth; 
    Fourth->link = NULL; 
    linsatend(Head,t);
    Node* Temp = Head;
    while (Temp != NULL)
    {
        cout << Temp->data << " ";
        Temp = Temp->link;
    }
    return 0;

}
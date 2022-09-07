#include<bits/stdc++.h>
using namespace std;


struct Node
{
    public:
    int data;
    Node* link;
    Node* prev;
         Node(int data){
        this->data = data;
        link = NULL;
        prev = NULL;
    }
};

int dubblyappend(Node* Head,int Element)
{
    Node* NewNode = new Node(Element);
    Node* ptr = Head;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = NewNode;
    NewNode->prev = ptr;
}

int main()
{
    int Element;
    cout << "ENTER THE ELEMENT WHICH IS TO BE APPENDED:";
    cin >> Element;
    Node* Head = new Node(1);
    Node* Second = new Node(6);
    Node* Third = new Node(22);
    Node* Fourth = new Node(3);

    Head->link = Second;
    Second->link = Third;
    Third->link = Fourth;
    Fourth->link = NULL;

    Fourth->prev = Third;
    Third->prev = Second;
    Second->prev = Head;
    Head->prev = NULL;
    dubblyappend(Head,Element);
    Node* Temp = Head;
    while (Temp != NULL)
    {
        cout << Temp->data << " ";
        Temp = Temp->link;
    }
    
    return 0;
}
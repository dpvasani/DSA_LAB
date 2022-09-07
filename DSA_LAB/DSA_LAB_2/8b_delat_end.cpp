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


int delatend(Node* Head){
    Node* Temp = Head;

    while(Temp->link->link != NULL)
    {
        Temp = Temp->link;
    }
    Temp->link = NULL;
}

int main()
{
    Node* Head = new Node(1);
    Node* Second = new Node(6);
    Node* Third = new Node(22);
    Node* Fourth = new Node(3);
    Head->link = Second;
    Second->link = Third; 
    Third->link = Fourth; 
    Fourth->link = NULL;
    delatend(Head);
    Node* Temp = Head;
    while (Temp != NULL)
    {
        cout << Temp->data << " ";
        Temp = Temp->link;
    }
    return 0;
}
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
int lreplatind(Node* Head,int Position,int Element){
    Node* Temp = Head;
    int cnt = 0;
    while (Temp != NULL){
        cnt++;
        if (cnt == Position)
        {
            Temp->data = Element;
        }
        Temp = Temp->link;
    }
    
    
}


int main()
{
    cout << "1 2 3 4" << endl;
    int a;
    cout << "FROM THE ABOVE LINKED LIST ENTER THE POSITION AT WHICH YOU WANT OT REPLACE:";
    cin >> a;
    int b;
    cout << "ENTER THE NEW ELEMENT:";
    cin >> b;
    Node* Head = new Node(1);
    Node* Second = new Node(2);
    Node* Third = new Node(3);
    Node* Fourth = new Node(4);
    Head->link = Second; 
    Second->link = Third; 
    Third->link = Fourth; 
    Fourth->link = NULL;
    lreplatind(Head,a,b);
    Node* temp = Head;
    while (temp!= NULL)
    {
        cout << temp->data << " ";
        temp = temp->link;
    }
    
    return 0;
}
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

int Isrch(Node*Head,int element)
{
    int cnt =0;
    Node* ptr = Head;
    while (ptr != NULL)
    {
        cnt++;
        if (ptr->data == element)
        {
            return cnt;
        }
        ptr = ptr->link;
    }
    return -1;
}
int main()
{
    int t;
    cout << "Enter the element to be searched:";
    cin >> t;

    Node* Head = new Node(1);
    Node* Second = new Node(2);
    Node* Third = new Node(3);
    Node* Fourth = new Node(4);
    Head->link = Second; 
    Second->link = Third; 
    Third->link = Fourth; 
    Fourth->link = NULL; 
    cout << Isrch(Head,t) << endl;    
    return 0;
}
#include<iostream>
using namespace std;
struct  Node
{
    int data;
    struct Node *next;
};
struct Node *head=NULL;

//creating fuction for node creation
struct Node *createNode(int data)
{
    struct Node *newNode = new struct Node;
    newNode->data=data;
    newNode->next=NULL;
    return newNode;
}
void insertFront(int data)
{
    struct Node *newNode= createNode(data);
    newNode->next = head;
    head = newNode;
}
void insertEnd(int data)
{
    struct Node *newNode= createNode(data);
    
    if(head == NULL)
    {
        head=newNode;
        return;
    }
    struct Node *temp=head;
    while(temp->next !=NULL){
    temp=temp->next;
    cout<<"working fine"<<endl;
    temp->next=newNode;
    }
}


void printList()
{
    struct Node *temp=head;
    while(temp!= NULL)
    {
        cout<<" "<<temp->data<<endl;
        temp=temp->next;
    }
    cout<<"end of the list"<<endl;
}
int main()
{
    insertFront(10);
    insertFront(20);
    insertFront(40);
    insertFront(30);
    //printList();
    insertEnd(50);
    printList();
    return 0;
}




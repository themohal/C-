#include <iostream>
using namespace std;

//Creating Node Structure
struct Node{
  int data;
  Node *link;
};
//creating head pointer and equating to NULL
Node *head=NULL;

//Function to insert at the beginning of linked list
void insertBeg (int d)
{
    Node *ptr = new Node();
    ptr->data=d;
    ptr->link=head;
    head=ptr;
}
//Function to insert at the end of linked list
void insertEnd (int d)
{
    Node *ptr = new Node();
    ptr->data=d;
    ptr->link=NULL;
    
    //If list is empty
    if(head==NULL)
    head=ptr;
    //else list is not empty
    else
    {
        Node *temp = head;
        while(temp->link!= NULL)
        {
            temp=temp->link;
        }
        temp->link=ptr;

    }

}
//Function to display linked list
void dispLink()
{
    Node *temp=head;
    while(temp!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<"\n";
}
void add(int n)
   {   
   if(head==NULL)
   {
           Node *q;
         q=new Node();
         	q->data=n;
         	q->link=head;
         	q->link=q;
         	head=q;}
         
         		Node *l=new Node();
         	l->data=n;
         	l->link=head;
        
	}
	
//Main Function
int main()
{
    
    add(5);
    add(8);
    
    dispLink();
    return 0;
}

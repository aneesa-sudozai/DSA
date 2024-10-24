#include<iostream>
using namespace std;
struct Node
{
	int data;
Node *next;
};
Node *head=NULL;
void insert(int n)
{
	Node *newNode=new Node;
	newNode -> data=n;
	newNode -> next=head;
	head = newNode;
}
void insertAtend(int no)
{
Node *newNode=new Node;
	newNode -> data=no;
	newNode->next = NULL;  
		Node *temp=head;	
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newNode;
		
			
}
void print()
{
	cout<<"Elements in single list are :"<<endl;
	Node *temp=head;
	while(temp!=NULL)
	{
	cout<<temp->data;
	temp=temp->next;	
	}
}
int main()
{
	insert(1);
	insert(2);
	
	insertAtend(10);
	print();
}
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
void insertAtbeginning(int no)
{
Node *newNode=new Node;
	newNode -> data=no;
		newNode -> next=head;
			head=newNode;
			
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
	int numNodes, value,data;


    cout << "Enter the number of nodes to insert: ";
    cin >> numNodes;

    
    for (int i = 0; i < numNodes; i++) {
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> value;
        insert(value);
    }
cout << "Enter the data you want to insert at beginning: ";
    cin >> data;
insertAtbeginning(data);
  
    print();

    return 0;
}
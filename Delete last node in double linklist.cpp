#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node *prev;
};

Node *head = NULL;

void insert(int n) {
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = head;
    newNode->prev = NULL;
    
    if (head != NULL) {
        head->prev = newNode;
    }
    
    head = newNode;
}
void deleteAtbegining() {
   if(head==NULL)
    {
    	cout<<"List is empty there is no element to delete";
    	
	}
	Node *temp=head;
	head=temp->next;
	delete temp;

    
}
void deleteAtEnd() {
    if (head == NULL) {
        cout << "List is empty, there is no element to delete" << endl;
        return;
    }

    Node *temp = head;

  
    if (temp->next == NULL) {
        delete temp;
        head = NULL;
        return;
    }

    
    while (temp->next != NULL) {
        temp = temp->next;
    }


    temp->prev->next = NULL;
    delete temp;
}

void print() {
    cout << "Elements in the list are: " << endl;
    Node *temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int numNodes, value,choice;
    cout << "Enter the number of initial nodes to insert: ";
    cin >> numNodes;

    for (int i = 0; i < numNodes; i++) {
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> value;
        insert(value);
    }

    cout<<"WHAT YOU WANT TO DO"<<endl;
cout<<"1.Delete at end"<<endl;
cout<<"2.Delete at start"<<endl;
cin>>choice;
switch(choice)
{
	case 1:
	
   deleteAtbegining();	
    print();
    break;
    case 2:
    
    deleteAtEnd();	
    print();
	   break;	
}
 
    
  
    
}

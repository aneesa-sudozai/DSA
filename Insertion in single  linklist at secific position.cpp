#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *head = NULL;

void insert(int n) {
    Node *newNode = new Node;
    newNode->data = n;
    newNode->next = head;
    head = newNode;
}

void insertAtposition(int n, int p) {
    Node *newNode = new Node;
    newNode->data = n;

    if (p == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node *temp = head;
    
   
    for (int i=1; i<p-1 && temp!=NULL;i++) {
        temp = temp->next;
    }

   
    if (temp == NULL) {
        cout << "Invalid position" << endl;
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
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
    int numNodes, value, position, insertValue;
    cout<<"Enter the number of initial nodes to insert: ";
    cin>>numNodes;

    for (int i=0;i<numNodes;i++) {
        cout<<"Enter value for node "<<i +1<<": ";
        cin>>value;
        insert(value);
    }
    cout<<"Enter the value to insert: ";
    cin >> insertValue;

    cout<<"Enter the position to insert the value: ";
    cin>>position;

    insertAtposition(insertValue, position);
    
    
    print();

   
}
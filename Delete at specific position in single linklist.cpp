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

void deleteatSpecificposition(int position) {
    if (head == NULL) {
        cout << "List is empty, there is no element to delete" << endl;
        return;
    }

    
    if (position == 1) {
        Node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node *temp = head;

    for (int i = 1; temp != NULL && i < position - 1; i++) {
        temp = temp->next;
    }

   
    if (temp == NULL || temp->next == NULL) {
        cout << "Position out of bounds" << endl;
        return;
    }

    temp->next = temp->next->next;
    delete temp->next; 
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
    int numNodes, value,p;
    cout << "Enter the number of initial nodes to insert: ";
    cin >> numNodes;

    for (int i=0; i<numNodes;i++) {
        cout<<"Enter value for node "<<i +1 <<": ";
        cin>>value;
        insert(value);
    }
cout << "Enter the node you want to delete: ";
    cin >> p;
    deleteatSpecificposition( p);
    
  
    print();

    return 0;
}

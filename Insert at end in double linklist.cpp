#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* head = NULL;

void insert(int n) {
    Node* newNode = new Node;
    newNode->data = n;
    newNode->next = head;
    newNode->prev = NULL;

    if (head != NULL) {
        head->prev = newNode;
    }

    head = newNode;
}



void insertAtEnd(int n) {
    Node* newNode = new Node;
    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

void print() {
    Node* temp = head;
    cout << "Elements in the doubly linked list are: " << endl;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int numNodes, value, dataAtend;

    cout<<"Enter the number of nodes you want to insert : ";
    cin>>numNodes;

    for (int i = 0; i < numNodes; i++) {
        cout<<"Enter value for node " << i + 1 << ": ";
        cin>>value;
        insert(value);
    }

    cout<<"Enter the value to insert at the beginning: ";
    cin>>dataAtend;
    insertAtEnd(dataAtend);

    print();

    return 0;
}

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
    int numNodes, value;
    
    cout << "Enter the number of nodes to insert: ";
    cin >> numNodes;

    for (int i = 0; i < numNodes; i++) {
        cout << "Enter value for node " << i + 1 << ": ";
        cin >> value;
        insert(value);
    }

    print();

    return 0;
}

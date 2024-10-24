#include <iostream>
using namespace std;


struct Node {
    int data;
    Node* next;
};


Node* top = NULL;


void push(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    cout << value << " pushed into the stack." << endl;
}


void pop() {
    if (top == NULL) {
        cout << "Stack is empty, nothing to pop." << endl;
        return;
    }
    Node* temp = top;
    top = top->next;
    cout << "Popped element: " << temp->data << endl;
    delete temp;
}


void peek() {
    if (top == NULL) {
        cout << "Stack is empty." << endl;
        return;
    }
    cout << "Top element: " << top->data << endl;
}

int main() {
  
    push(10);
    push(20);
    push(30);
    peek();     
    pop();       
    peek();     
    pop();      
    peek();      
    pop();      
    pop();       

    return 0;
}

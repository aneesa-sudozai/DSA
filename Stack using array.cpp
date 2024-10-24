#include <iostream>
using namespace std;

int stack[100];
int top = -1;

void push(char value) {
    if (top >= 99) {
        cout << "Stack overflow. Cannot push more elements." << endl;
    } else {
        top++;
        stack[top] = value;
        cout << value << " pushed to stack." << endl;
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack underflow. Cannot pop from an empty stack." << endl;
    } else {
        cout << stack[top] << " popped from stack." << endl;
        top--;
    }
}

void peek() {
    if (top == -1) {
        cout << "Stack is empty. No top element." << endl;
    } else {
        cout << "Top element is: " << stack[top] << endl;
    }
}

void display() {
    if (top == -1) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack elements are: ";
        for (int i = 0; i <= top; i++) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice,  n;
    char value;

    do {
        cout << "\nMenu:\n";
        cout << "1. Push element\n";
        cout << "2. Pop element\n";
        cout << "3. Peek top element\n";
        cout << "4. Display stack\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "How many numbers you want to insert: ";
                cin >> n;
                for (int i = 0; i < n; i++) {
                    cout << "Enter number " << i + 1 << ": ";
                    cin >> value;
                    push(value);
                }
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 5);

    return 0;
}

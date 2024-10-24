#include <iostream>
using namespace std;
int square(int num) {
    return num * num;
}

int main() {
    
    int (*squarePtr)(int);

    
    squarePtr = &square; 

    
    cout << "Enter a number: ";
    int userInput;
    cin >> userInput;

    
    int result = squarePtr(userInput);

  
    cout << "Square of " << userInput << " is: " << result << endl;

    return 0;
}

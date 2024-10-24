#include<iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    

    int *arr = new int[n]; 

    cout << "Enter the numbers: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 == 0) {
            evenCount++; 
        } else {
            oddCount++; 
        }
    }

    cout << "Number of even numbers: " << evenCount << endl;
    cout << "Number of odd numbers: " << oddCount << endl;

    delete[] arr; 

    return 0;
}

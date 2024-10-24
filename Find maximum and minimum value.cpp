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

    int maxVal = arr[0];
    int minVal = arr[0];

    for (int i = 0; i < n; ++i) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }

    cout << "Maximum value: " << maxVal << endl;
    cout << "Minimum value: " << minVal << endl;

    delete[] arr; 

    return 0;
}

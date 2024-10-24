#include <iostream>
using namespace std;
int main() {
    int arr[size]; 
    int size,element,position;  
    const int maxsize= 12;
    cout<<"Enter the size of array: ";
    cin>>size;
    if (size>maxsize || size<0){
        cout<<"invalid size array out of bound.";
        return 1; 
    }
    cout << "Enter the elements of the array: ";
    for (int i=0;i<size;i++) {	
        cin>>arr[i];-
    }
    cout<<"Enter the element to insert: ";
    cin>>element;
    cout<<"Enter the position where to insert element: ";
    cin>>position;
    for(int i=size;i>position;--i) {
        arr[i]=arr[i-1];
    } 
    arr[position]=element;
    size++;
    cout<<"Array after insertion: ";
    for(int i=0; i<size;++i) {
        cout<<arr[i]<<endl;
    }
    return 0;
}
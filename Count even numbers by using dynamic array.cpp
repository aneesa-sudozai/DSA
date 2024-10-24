#include<iostream>
using namespace std;

int main() {
    int n,count=0;

    cout << "Enter the number of elements: ";
    cin >> n;


    int *arr = new int[n]; 

    cout << "Enter the numbers: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
         for (int i = 0; i < n; ++i) 
         {
		 
        if(arr[i]%2==0)
        {
        	count++;
		}
	
    }
 	cout<<"Even numbers "<<count;

}
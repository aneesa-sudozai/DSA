#include<iostream>
using namespace std;

int main(){
    int array[10], n, x;
    const int max_size= 10;
    cout<<"Enter the size of the array (max " <<max_size<< "): ";
    cin>>n;
    if (n>max_size){
        cout<<"size exceeds the limit "<<max_size<<endl;
        return 1; 
    }
    cout<<"enter elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int midindex=n/2;
    for(int i=n;i>midindex;i--){
        array[i]=array[i-1];
    }
    cout<<"enter the element to insert at middle: ";
    cin>>x;
    array[midindex]=x;
    n++;
    cout<<"array elements are: " <<endl;
    for(int i=0;i<n;i++){
        cout<<array[i]<<endl;
    }

    return 0;
}









#include<iostream>
using namespace std;

int main(){
    int array[10], n, x;
    const int maximumsize= 10;
    cout<<"Enter the size of the array  (max " <<max_size<< "):";
    cin>>n;
    if (n>maximumsize){
        cout<<"size exceeds the limit "<<maximumsize<<endl;
        return 1; 
    }
    cout<<"enter elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    int middleindex=n/2;
    for(int i=n;i>middleindex;i--){
        array[i]=array[i-1];
    }
    cout<<"enter the element to insert at middle: ";
    cin>>x;
    array[middleindex]=x;
    n++;
    cout<<"array elements are: " <<endl;
    for(int i=0;i<n;i++){
        cout<<array[i]<<endl;
    }

    return 0;
}
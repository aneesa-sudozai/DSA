#include<iostream>
using namespace std;
int main()
{
	int array[10];
	int n,x,i;
	const int max_size= 10;
		cout<<"Enter the size of array: ";
    cin>>n;
    if (n>max_size){
        cout<<"size exceeds the limit "<<max_size<<endl;
        return 1; 
    }
	
	cout<<"Enter array elements";
	for( i=0;i<n;i++){
	cin>>array[i];
	}
	cout<<"Enter new  elements you want to insert at end ";
	cin>>x;
	array[i]=x;
	n++;
	for(i=0;i<n;i++){
		cout<<array[i];
	}
}
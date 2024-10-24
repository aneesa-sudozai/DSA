#include<iostream>
using namespace std;
int main()
{
		int array[10],i,index ,newvalue;
	int n,x;
		cout<<"Enter size of array";
		cin>>n;
		
	cout<<"Enter array elements";
	
	for( i=0;i<n;i++)
	{
	cin>>array[i];
	}
		cout<<"Original array";
	for( i=0;i<n;i++)
	{
cout<<array[i]<<endl;
	}
	cout<<"Enter index you want to update";
		cin>>index;
		if(index<0 || index>=n)
		{
			cout<<"Invalid index";
			return 1;
		}
		cout<<"Enter new value";
		cin>>newvalue;
		array[index]=newvalue;
			cout<<"Updated array";
	for( i=0;i<n;i++)
	{
cout<<array[i]<<endl;
	}
	cout<<endl;
}
		
	
#include<iostream>
using namespace std;
int main()
{
		int array[10],i;
	int n,x;
		cout<<"Enter size of array";
		cin>>n;
		
	cout<<"Enter array elements";
	
	for( i=0;i<n;i++)
	{
	cin>>array[i];
	}
	cout<<"Enter a number to be search in array ";
	cin>>x;
	for( i=n;i>0;i--)
	{
		if(array[i]==x)
		{
			cout<<"Element found at index"<<i<<endl;
			
		}
		
	}
	if(i=n)
	{
	cout<<"Element not found in array";
	
	}
}
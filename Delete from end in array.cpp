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
	
	
n--;
cout<<"Array after deletion";
for(int i=0;i<n;i++)
{
	cout<<array[i]<<endl;
}
}
		

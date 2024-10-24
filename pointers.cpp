#include<iostream>
using namespace std;
int main()
{
	int a[]={5,10,15};
	int *ptr=a;
	for(int i=0;i<3;i++)
	{
	
		cout<<*ptr<<endl;
		++ptr;
		
	}
}
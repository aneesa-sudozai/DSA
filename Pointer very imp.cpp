#include<iostream>
using namespace std;
int main()
{
	//Declare pointer variable
char *p;
    //Initialize a varialble and assign address of variable to pointer
   char b='a';
 p=&b;
 //Print address	
 cout<<(void*)p<<endl;
 
 //print value
 cout<<*p;
}
//pointer datatype is always same as variale datatype
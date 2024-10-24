#include <iostream>
using namespace std;
int main() {
  string a= "asdf"; 

   string* ptr; 

    ptr = &a; 
    
    cout << "Value of the variable : " << a << endl;
    cout << "Value stored in the pointer (ptr): " << *ptr << endl;
    cout<<"Address of number stored in pointer:"<<ptr;

    return 0;
}

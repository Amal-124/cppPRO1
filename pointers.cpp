#include <iostream> //access control system
using namespace std;

int main()
{
	int a =10;
	int *p; //declare a pointer that points to th@ of a.
	p= &a;	
	cout<< "the value of a is : "<< *p << endl; //value of a before change
	*p = 15; // *p is the value of a 
	cout<< "the value of a is : "<<a << endl;
	cout<< "the address of a is : "<<p <<endl;
	return 0;	
}

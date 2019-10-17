#include <iostream> //access control system
using namespace std;
class foo{
	public:
		int id; //this is the this->id
		createfoo(int id) 
		{
		//	id =p; //id of memeber = id of function
		this-> id=id; // to avoid errors write a pinter that refers to the current object
		}
				};
int main()
{
	foo f1;
	f1.createfoo(66); 
	foo f2;
	cout<< f1.id; 
	return 0;	
}

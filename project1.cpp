#include <iostream> //access control system
using namespace std;
// each one has a specific room to access 
class person { //PARENT CLASS
	public:
			int id; //memebers-attributes
			string name;
};
class student:public person //declare the inheritance
	{
	
	}; //end
class faculty:public person //inheriets publicly from person
	{
		
	};//end
class tech:public person //name of class
	{
		
	};//end
class janitor:public person
	{
		
	};//end
class FacOffices
	{
	
	};//end
class ClRooms
	{
	
	};//end
class TechRooms
	{
	
	};//end




int main()
{
		
	return 0;	
}

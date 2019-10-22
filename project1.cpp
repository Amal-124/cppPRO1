#include <iostream> //access control system
using namespace std;
// each one has a specific room to access 
class person { //BASE CLASS
	protected:
			int id; //memebers-attributes
			string name;
};			string role;
class room{ //BASE CLASS 2
	protected:
			int id; //memebers-attributes
			string type;
			string building;
};
class student:public person //declare the inheritance
	{
	
	}; //end
class faculty:public person //inheriets publicly from person
	{
		private:
		string Speciality;
	};//end
class tech:public person //name of class
	{
	private:
		string Speciality;	
	};//end
class janitor:public person
	{
		
	};//end
class FacOffices:public room
	{
	private:
		string Faculty;
	};//end
class ClRooms:public room
	{
	private:
		float capacity;
	};//end
class TechRooms:public room
	{
	private:
		int hazardLevel;
	};//end



int main()
{
		
	return 0;	
}

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
class student:public person{ //declare the inheritance
	public:
		
	}; //end
class faculty:public person{ //inheriets publicly from person
		private:
		 string Speciality;
		public:
			
	};//end
class tech:public person { //name of class	
	private:
		string Speciality;
	public:
		void SetSpeciality(string sp);
		string GetSpeciality(void);
		
	};//end
class janitor:public person{

		
	};//end
class FacOffices:public room{
	private:
		string Faculty;
	public:	
		void Setfaculty(string fa);
		string Getfaculty(void);
	
	};//end
class ClRooms:public room{
	private:
		float capacity;
	public:	
		void SetCapacity(string ca);
		string GetCapacity(void);
	
	};//end
class TechRooms:public room{
	private:
		int hazardLevel;
	public:
		void SetHL(string ha);
		string GetHL(void);	
	
	};//end
int main()
{
		
	return 0;	
}

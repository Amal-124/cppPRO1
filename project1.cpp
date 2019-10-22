#include <iostream> //access control system
using namespace std;
// each one has a specific room to access 
class person { //BASE CLASS
	protected:
			string id; //memebers-attributes
			string name;
			string role;
	public:
			//constructers
	};

class room{ //BASE CLASS 2
	protected:
			string id; //memebers-attributes
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
			//constructer that inheiertes
			
	};//end
class tech:public person { //name of class	
	private:
		string Speciality;
	public:
		void SetSpeciality(string SP);
		string GetSpeciality(void);
		
	};//end
// setter and getter for the class tech
void tech::SetSpeciality(string SP) {Speciality =SP;}	
string tech::GetSpeciality(void){ return Speciality; }

class janitor:public person{

		
	};//end
class FacOffices:public room{ //constructer
	private:
		string Faculty;
	public:	
		void Setfaculty(string FA);
		string Getfaculty(void);
	
	};//end
// setter and getter for the class	
void FacOffices::Setfaculty(string FA) {Faculty =FA;}	
string FacOffices::Getfaculty(void){ return Faculty; }	

class ClRooms:public room{
	private:
		float capacity;
	public:	
		void SetCapacity(float ca);
		float GetCapacity(void);
	
	};//end
// setter and getter for the class	
void ClRooms::SetCapacity( float ca){capacity = ca;}
float ClRooms::GetCapacity(void){return capacity;}

class TechRooms:public room{
	private:
		int hazardLevel;
	public:
		void SetHL(string ha);
		int GetHL(void);	
	
	};//end
// setter and getter for the class	
void TechRooms::SetHL(string ha){ hazardLevel = ha;}
string TechRooms::GetHL(void){return hazardLevel;}
int main()
{
		
	return 0;	
}

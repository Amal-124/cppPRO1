#include <iostream> //access control system
using namespace std;
// each one has a specific room to access 
class person { //BASE CLASS
	protected:
			string id; //memebers-attributes
			string name;
			string role;
	public:
		void SetID(string ID){id =ID;}
		string GetID(void){ return id; }
		void SetNAME(string NAME){name =NAME;}
		string GetNAME(void){ return name; }
		void SetROLE(string ROLE){role =ROLE;}	
		string GetROLE(void){ return role; }
	
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
			faculty(string i, string n, string r, string s){id =i; name=n; role=r; Speciality =s;  } //constructer-
		    string getSpeciality(){return Speciality;};	//constructer that inheiertes
			
	};//end
class tech:public person { //name of class	
	private:
		string Speciality;
	public:
		void SetSpeciality(string SP){Speciality =SP;}	
		string GetSpeciality(void){ return Speciality; }
		
	};//end

class janitor:public person{

		
	};//end
class FacOffices:public room{ //constructer
	private:
		string Faculty;
	public:	
	
		void Setfaculty(string FA){Faculty =FA;}
		string Getfaculty(void){ return Faculty; }
	
	};//end


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
		void SetHL(int ha);
		int GetHL(void);	
	
	};//end
// setter and getter for the class	
void TechRooms::SetHL(int ha){ hazardLevel = ha;}
int TechRooms::GetHL(void){return hazardLevel;}
int main()
{	
	person p1;
	p1.SetID("45"); p1.SetNAME("ABCD"); p1.SetROLE("lll")	;
	return 0;	
}

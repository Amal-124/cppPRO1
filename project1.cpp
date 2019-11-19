#include <iostream> //access control system

using namespace std;
// each one has a specific room to access 
class person { //BASE CLASS
	protected:
			string id; //memebers-attributes
			string name;
			string role;
	public:
		person();
		~person();
		person(string, string,string ); //constructer
		void SetID(string ID){id =ID;}
		string GetID(void){ return id; }
		void SetNAME(string NAME){name =NAME;}
		string GetNAME(void){ return name; }
		void SetROLE(string ROLE){role =ROLE;}	
		string GetROLE(void){ return role; }
	
	};
person::~person(){}
person::person(){} //declaring the constructer
person::person(string ID, string NAME, string ROLE){id=ID;name=NAME;role =ROLE;}
class room{ //BASE CLASS 2
	protected:
			string id; //memebers-attributes
			string type;
			string building;
			
	public:
			room(string, string , string);
			room();
			~room();
					
	bool grantAccess(person p)
	{ //function we need to change the //name so it doesnt overwrite with other classes because of inheritance
		if(p.GetROLE() == "janitor" ) //no need for a pointer since a janitor can access any room
		{ 
		cout << " welcome "<< p.GetNAME()<<endl; 
		return true;
		
		} 
		else 
		{
		cout << " Access denied "<<endl; return false;
		}
         } 
		   };
room::room(){}
room::~room(){}
room::room(string ID, string TYPE, string BUILD){id =ID; type=TYPE; building =BUILD;}
class student:public person{ //declare the inheritance
	public:
	student(){}
	student(string i, string n, string r){id =i; name=n; role=r;} //constructer	
	friend class Clrooms; 
	}; //end declare friendship
class faculty:public person{ //inheriets publicly from person
		private:
		 string Speciality;
		public:
			faculty(string i, string n, string r, string s){id =i; name=n; role=r; Speciality =s;  } //constructer-
		    string getSpeciality(){return Speciality;}	//constructer that inheiertes
		    void setSpeciality(string FSP){Speciality =FSP;}
			void RequestAccess(string id){ } //function not complete yet
			
	friend class FacOffices;
	friend class ClRooms;
	};//end
class tech:public person { //name of class	
	private:
		string Speciality;
	public:
		void SetSpeciality(string SP){Speciality =SP;}	
		string GetSpeciality(void){ return Speciality; }
		tech(string i, string n, string r, string s){id =i; name=n; role=r; Speciality =s; } //constructer
		
	friend class TechRooms;
	};//end
class janitor:public person{
	public:
	janitor(string i, string n, string r){id =i; name=n; role=r;} //constructer		
		
	friend class ClRooms;
	friend class TechRooms;
	friend class FacOffices;
	};//end friend classes
class FacOffices:public room{ //constructer
	private:
		faculty* Faculty; //pointer
		
	public:	
		//void Setfaculty(string FA){Faculty =FA;}
	    //string Getfaculty(void){ return Faculty; }
		void Setfaculty(faculty* val){Faculty =val;} 
		faculty* Getfaculty(){ return Faculty;} //get with a pointer
	
		FacOffices(string i, string t, string b, faculty* f){ id =i; type=t; building= b; Faculty=f;}
		bool GrantAccess(person p){ //function
		//cout << "Checking access for " << Faculty->GetNAME()<< ".... " <<endl;
	if(p.GetROLE() == "faculty" && p.GetNAME()==Faculty->GetNAME()) //one condition is engo
		{ 
			cout << "welcome "<< p.GetNAME() <<endl;
			return true;
		}
	else 
		{
			cout << "Access denied "; return false ;
		}
		} 
	    friend class faculty;
};//end
class ClRooms:public room{
	private:
		float capacity; 	
		student *stu; //a pointer object
	public:	
		void SetCapacity(float ca){capacity = ca;}
		float GetCapacity(void){return capacity;}
		
		ClRooms(string i, string t, string b, float c, student *st) {id =i; type=t; building= b; capacity= c; stu=st;}	
	bool GrantAccess(person p){ //function
		if(p.GetROLE() == "student" && p.GetNAME()==stu->GetNAME()) //one condition is engo
		{ 
		cout << "welcome "<< p.GetNAME(); return true;
		}
		else {
		cout << "Access denied "; return false ;
		}
		   } 
		
	friend class student;
	friend class faculty; 
	};//end
class TechRooms:public room{
	private:
		int hazardLevel;
		tech * te; //a pointer object
	public:
		void SetHL(int ha){ hazardLevel = ha;}
		int GetHL(void){return hazardLevel;}	
		TechRooms(string i, string t, string b, int h, tech * vt) //constructer
		{ id =i; type=t; building= b; hazardLevel=h; te=vt;} //tell that old = new variable.
  bool GrantAccess(person p){ //function
		if(p.GetROLE() == "tech" && p.GetNAME()==te->GetNAME()) 
		{ 
		   cout << "welcome "<< p.GetNAME(); return true;
		}
		else
		{
		   cout << "Access denied "; return false ;
		}
		   } 
		friend class tech;
		};//end
		
class Students{ //a class for a group of students
	private:
		student st[30];
		int nbStudents;
		string ID; //the room id
	public:
		void SetNBS(int nb){nbStudents =nb;}
		int  GetNBS(void){ return nbStudents; }
		void SetId(int id1){ID =id1;}
		string  GetId(void){ return ID; }
		
		void addStudent(student s)
		{ 
		if(nbStudents<30)
		{
		  st[nbStudents]= s; //st[0]= s= student, then it will increment to add students to list.
		  nbStudents++;
		} 
		else {
		 cout << "There is no Capacity "<<endl; 
		 
		     }
		 }
		
		void removeStudent()
		{
			if(nbStudents!=0)
			{	
				nbStudents--;	
			}
			else {cout << "Error ";}
		}
		
		void updateStudent(int index, string NewId, string NewName)
		{
		  st[index].SetID(NewId);
		  st[index].SetNAME(NewName);
		  
		  
		}
		
		
};//end
int main(){	
faculty p1("2011","muna","faculty","IT");
faculty p2("2341","maryam","faculty","IT");
tech p3("2341","maryam","tech","IT");
FacOffices O1("C123", "office", "building", &p1);
O1.GrantAccess(p1);
TechRooms T1("C123", "techroom", "building", 3, &p3);
T1.GrantAccess(p3);
janitor j1("20100","sal","janitor");
O1.grantAccess(j1);
student s1("201601", "ahmed","student");
student s2("201602", "muna","student");
Students sec1, sec2; 
sec1.addStudent(s1); 
sec1.addStudent(s2);
sec2.addStudent(s1);

	return 0;	
}

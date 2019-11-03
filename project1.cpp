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
};
room::room(){}
room::~room(){}
room::room(string ID, string TYPE, string BUILD){id =ID; type=TYPE; building =BUILD;}
class student:public person{ //declare the inheritance
	public:
		
	friend class Clrooms; }; //end declare friendship
class faculty:public person{ //inheriets publicly from person
		private:
		 string Speciality;
		public:
			faculty(string i, string n, string r, string s){id =i; name=n; role=r; Speciality =s;  } //constructer-
		    string getSpeciality(){return Speciality;}	//constructer that inheiertes
		    void setSpeciality(string FSP){Speciality =FSP;}
			void RequestAccess(string id){ } //function
			
	friend class FacOffices;friend class ClRooms;};//end
class tech:public person { //name of class	
	private:
		string Speciality;
	public:
		void SetSpeciality(string SP){Speciality =SP;}	
		string GetSpeciality(void){ return Speciality; }
		
	friend class TechRooms;};//end
class janitor:public person{

		
	friend class ClRooms;friend class TechRooms;friend class FacOffices;};//end friend classes
	
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
		cout << "Checking access for " << Faculty->GetNAME()<< ".... " <<endl;
		if(p.GetROLE() == "faculty" && p.GetNAME()==Faculty->GetNAME()) //one condition is engo
		{ 
			cout << "welcome"<< p.GetNAME(); 
			return true;
		}
		else 
		{
			cout << "Access denied"; return false ;
		}
		} 
	    friend class faculty;
};//end
class ClRooms:public room{
	private:
		float capacity;
		student *st; //a pointer object
	public:	
		void SetCapacity(float ca){capacity = ca;}
		float GetCapacity(void){return capacity;}
	bool GrantAccess(person p){ //function
		if(p.GetROLE() == "student" && p.GetNAME()==st->GetNAME()) //one condition is engo
		{ cout << "welcome"<< p.GetNAME(); return true;}
		else {cout << "Access denied"; return false ;}} 
		
	friend class student;friend class faculty; };//end
class TechRooms:public room{
	private:
		int hazardLevel;
		tech * te; //a pointer object
	public:
		void SetHL(int ha){ hazardLevel = ha;}
		int GetHL(void){return hazardLevel;}	
		TechRooms(string i, string t, string b, int h, tech * vt)
		{ 
		id =i; type=t; building= b; hazardLevel= h; te=vt;
		}	
	bool GrantAccess(person p){ //function
		if(p.GetROLE() == "tech" && p.GetNAME()==te->GetNAME()) //one condition is engo
		{ cout << "welcome"<< p.GetNAME(); return true;}
		else {cout << "Access denied"; return false ;}} 
		
	friend class tech;};//end

int main(){	
faculty p1("2011","muna","faculty","IT");
faculty p2("2341","maryam","faculty","IT");
FacOffices O1("C123", "office", "building", &p1);
O1.GrantAccess(p1);
TechRooms T1("C123", "techroom", "building", 3, &p1);
T1.GrantAccess(p1);
	return 0;	
}

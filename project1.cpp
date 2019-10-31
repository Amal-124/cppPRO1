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
		FacOffices(string i, string t, string b, faculty* f){ id =i; type=t; building d;}
		
		bool GrantAccess(person p){ //function
		if(p.GetROLE() == "faculty" && p.GetNAME()==Faculty->GetNAME()) //one condition is engo
		{ cout << "welcome"<< p.GetNAME(); return true;}
		else {cout << "Access denied"; return false ;}} 
	    friend class faculty;};//end
class ClRooms:public room{
	private:
		float capacity;
	public:	
		void SetCapacity(float ca){capacity = ca;}
		float GetCapacity(void){return capacity;}
	
	friend class student;friend class faculty; };//end
class TechRooms:public room{
	private:
		int hazardLevel;
	public:
		void SetHL(int ha){ hazardLevel = ha;}
		int GetHL(void){return hazardLevel;}	
	
	friend class tech;};//end

int main(){	
faculty p1("muna","2011","faculty","IT");
faculty p2("maryam","2341","faculty","IT");
FacOffices O1("C123", "office", "building", &p2);
O1.GrantAccess(p1);
	return 0;	
}

#include <iostream>
using namespace std;
 class student{
  	private:	
 		int id;
 		string name;
 		float gpa;
 		string major;
 	public: //function is public
 	//int getID()
	 student(int i, string n, float g, string m){ //constructor function, same name as class
	 	id =i;
	 	name= n;
	 	gpa=g;
	 	major=m;
 }
 friend class registration; //registration class can access the class's memebers but student class cannot access registration
};
 
 class registration{
 	private:
 		string courseCode;
 		int id;
 	public:
	 	void showSdetails(student s) //student from class above
		 {
	 		cout<<"ID = " << s.gpa; //it can access any memeber and print it
	 		//cout<<"ID = " << s.getID();
		 }
 };
 int main(){
 	student s(2010321, "Ghassan", 0.0,"CS");
 	registration r; //an object 
 	r.showSdetails(s); 
 	
 	return 0;
 }

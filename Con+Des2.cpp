#include <iostream>
using namespace std;
class student 
{  
 public:
    //setters
	void setid(int ID);
	void setname(string NAME);
	void setgpa(double GPA);
	//getters
	int getid();
	double getgpa();
	string getname();
	student(int id); //constructer
 private:
	int id;
	string name;
	double gpa; };
	
student::student(int ID){ id =ID;}
// initiliazing the getters
int student::getid(void){ return id;}
string student::getname(void){ return name;}
double student::getgpa(void){ return gpa;}
// initiliazing the setters
void student::setid(int ID){ id= ID;}
void student::getname(string name){ name =NAME;}
void student::getgpa(double gpa){ gpa= GPA;}

int main(){
	student s;
	s.setgpa(6.0);
	cout<<"length of line : "<<s.getgpa() << endl;	
	return 0;
}

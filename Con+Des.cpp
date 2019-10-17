#include <iostream>
using namespace std;
class Line 
{  
public:
	void setlength(double len);
	double getlength(void);
	Line();
	~Line();
private:
	double length;

};
Line::Line(void)
{	
	cout<<"object is being created"<<endl; //sends a message
}
Line::~Line(void)
{	
	cout<<"object is being deleted"<<endl;
}
void Line::setlength(double length)
{
	length = len;
}
double Line::getlength(void)
{
	return length;
}
int main(){
	Line l;
	l.setlength(6.0);
	cout<<"length of line : "<<l.getlength() << endl;	
	return 0;
}

#include <iostream>
using namespace std;
class shape{
	protected:
		int width, height;
	public:
	void set_values (int a, int b)
	{width =a; height=b;}
	virtual int area(){return 0;}
			
};
class rectangle:public shape{
	public:
		int area(){ return width *height;}
};
class triangle:public shape{
	public:
		int area(){ return width *height/2;} 
};
int main(){
	rectangle R;
	triangle T;
	shape S;
	shape *sh1; //declare a pointer for each shape
	shape *sh2;
	shape *sh3;
	sh1=&R; //point it at a shapes address
	sh2=&T;
	sh3=&S;
	sh1->set_values(4,5);
	sh2->set_values(4,5);
	sh3->set_values(4,5);
	cout<<sh1->area()<<endl;
	cout<<sh2->area()<<endl;
	cout<<sh3->area()<<endl;
	return 0;
}

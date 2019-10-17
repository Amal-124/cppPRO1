#include<iostream>
using namespace std;
class shape{
	
	protected:
		float width =2.1;
		float height =2.3;
	public:
		float getArea(); //polymorphism 
};
class rectangle:public shape{
	public:
		float getArea();//{return width *height /2; }
		//rectangle(float w, float h){width =w; height=h;} //constructer
};

class triangle:public shape{
	public:
		float getArea();//{return width *height /2; }
		//triangle(float w, float h){width =w; height=h;} //constructer

};
float rectangle::getArea(){ //declare the function for this shape
	return width *height;
}
float triangle::getArea(){ //declare the function for this shape
	return width *height /2;
}
int main(){
	rectangle R;
	triangle T;
	cout<< R.getArea()<<endl;
	cout<< T.getArea()<<endl;
	return 0;
}

#include<iostream>
using namespace std;
class shape{
	
	protected:
		float width;
		float height;
	public:
		float getArea(); //polymorphism 
};
class rectangle:public shape{
	public:
		float getArea(){
		return width *height; }
		rectangle(float w, float h){width =w; height=h;} //constructer
};

class triangle:public shape{
	public:
		float getArea(){
		return width *height /2; }
		triangle(float w, float h){width =w; height=h;} //constructer

};

int main(){
	float inw, inh;
	cout<<"give the width "<<endl;
	cin>> inw;
	cout<<"give the height "<<endl;
	cin>> inh;
	rectangle R(inw, inh);//rectangle R(2,3);
	triangle T(inw, inh);//triangle T(5,7);
	cout<< R.getArea()<<endl;
	cout<< T.getArea()<<endl;
	return 0;
}

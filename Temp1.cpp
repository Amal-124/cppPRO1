#include<iostream>
#include<string>
using namespace std;

template <typename T>// declare a template of a general type
inline T  Max (T  a, T  b) //inline means written in the same line with shortcuts
{
	return a<b ? b:a; // choosing the max from a and b
}
int main()
{
	//we can call the function with different types because we created a type T
	int i = 39;
	int j = 20;
	cout<<" Max(i , j): "<< Max(i,j)<<endl;
	float f1 = 13.5;
	float f2 = 20.7;
	cout<<" Max(f1 , f2): "<< Max(f1,f2)<<endl;
	//we compare string alphabaticly
	string s1 = "Hello";
	string s2 = "World";
	cout<<" Max(s1 , s2): "<< Max(s1,s2)<<endl;
	return 0;
}

#include<iostream>
#include<vector>
#include<cstdlib>
#include<string>
#include<stdexcept>

using namespace std;
template <class T>
class Stack {
	private:
		
		vector<T> elems; // vecrtor (class) a generic container of type T //elements of the stack
		
	public: //functions of a stack
	
		void push(T const&);
		void pop();
		T top() const;	//return type of T
	
	bool empty() const{return elems.empty();} //return true if empty
};
template <class T>
void Stack<T>::push (T const& elem){ //add elems to stack (copy)
	//append a copy of passed element
	elems.push_back(elem);
}
template <class T>
void Stack<T>::pop (){//remove last element	
	if(elems.empty())
	{
	throw out_of_range("Stack<>::pop():empty stack"); //to check whether the stack is empty before popping
												      // if its empty we will get an error (avoid errors)
	}
	elems.pop_back();
}
template <class T>
void Stack<T>::top (){
	if(elems.empty())
	{
	throw out_of_range("Stack<>::top():empty stack"); //remove last element, built in function invoked if the stack is empty
	}
	return elems.back(); //the function empty is built-in function in the type vector.
						 // it returns true if
						 // returns false if 
}

int main()
{
	try{
		Stack<int> intStack; //stack of ints
		Stack<string> stringStack; //manipulate int stack
		
	}
}


#include <iostream>
using namespace std;

int main(){
	float grades[5];
	float sum;
	for(int i =0;i<5;i++){
		cout<<"grades["<<i<<"]=\t";
		cin>> grades[i];
	}
	for(int i =0;i<5;i++)
	{
		sum = sum+grades[i];
	}
	if(sum >=60) 
	{
		cout<<"pass";
	}
	else 
	cout<<"fail";
	
}

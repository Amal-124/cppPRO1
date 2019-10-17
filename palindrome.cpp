#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
using namespace std;
int main(){
	
	char* word =(char*)malloc(10); //size of the value pointed by word

    bool ispalindrome = true;
    int i=0;
    cout << "Enter word ";
    cin >> word ;
	int len =strlen(word);	//the word that is pointed by the address "word"
    while(ispalindrome == true && i<= len/2) 
	{
    	
    	if(*(word+i)!= *(word+len -1-i)){ //! means its diff
    		ispalindrome = false;
		}
		else i++; //continue to increase i which is the index
	}
    if(ispalindrome == true)
    	cout<<"The word "<< word << " is a palindrome ";
    else
		cout<<"The word "<< word << " is not a palindrome ";		
    
	
return 0;
}

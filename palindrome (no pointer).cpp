#include <iostream>
#include <string>
using namespace std;
int main(){
	
	string word;

    bool ispalindrome = true;
    int i=0;
    cout << "Enter word ";
    cin >> word ;
	int len = word.length();	
    while(ispalindrome == true && i<= len/2) //the condition to check wether a word is palindrome
	{
    	
    	if(word[i]!= word[len -1-i]){ //! means its diff
    		ispalindrome = false;
		}
		else i++; //continue to increase i 
	}
    if(ispalindrome == true)
    	cout<<"The word "<< word << " is a palindrome ";
    else
		cout<<"The word "<< word << " is not a palindrome ";		
    
	
return 0;
}

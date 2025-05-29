#include <iostream>
using namespace std;

int main () {
	
	char string1[]="GIKI";
	char string2[20];
	// string2 has char data type and can store a maximum of 19 characters, plus a null character ('\0');
	
	cout<<"Enter the value of string 2 ";
	cin >> string2;
		
	cout << " The value of string 1 is "<< string1 <<endl;

	cout << " The value of string 2 is "<< string2 <<endl;
	
	cout << " Now displaying the value of string2 again " << endl;
	
	for (int i=0; string2[i]!='\0'; i++)
	// The correct null terminator is '\0' (zero) and NOT '\O' (the uppercase letter O);
	// Make sure to use the correct null terminator character;
	cout<<string2[i];
	
	cout<<endl<<" Finished Printing";
	 
	 
	return 0;
 	
	 
}


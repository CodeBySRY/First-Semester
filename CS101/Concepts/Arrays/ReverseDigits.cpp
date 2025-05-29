// Inputting And Reversing Number (Known # Of Digits) : USING ARRAYS


#include <iostream>
#include <string>
using namespace std;

int main () {
    int RollNum[10];
    
    
    // An arbitary mumber, like 10, can be declared, and its fine. Whats important are the conditions that follow.
    // You CANNOT initialize an array, without declaring its size and its elements;
    // int RollNum[];    <-------------- THIS IS WRONG.
    
    
    cout << "Enter Your Roll Number (Line By Line): " << endl;
    // Do not insert such statements in for loops, as it gets messy and the statement keep repeating in each iteration of the loop.
    
    for (int i = 0; i < 7; i++) {
        cout << "";
        cin >> RollNum[i];
        
    }
    
    cout << endl << endl;
    cout << "Displaying Your Roll Number Below : " << endl << endl;
    
    for (int i = 0; i < 7; i++) {
    	
        cout << RollNum[i];
        // If i insert an endl here, then the roll number will be displayed digit by digit, in each new line.
        // If it is required that the number be displayed in a sequence, in one line, then NO endl is to be inserted.
    }
    
    cout << endl;
    cout << "Displaying Your Roll Number In Reverse Order : " << endl << endl;
    
    for (int i = 6; i >= 0; i--) {
    	// The above created condition generates the correct output, printing the roll number in the correct, reverse order.
    	// The main thing to note is that: (# Of Digits - 1) = initial starting value of i, and the loop should run until i >= 0.
    	// Only this condition will cause the output to be displayed correctly.
    	cout << RollNum[i];
	}
    
    
    return 0;
    
    
}
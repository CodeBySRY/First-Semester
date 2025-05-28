/*
#include <iostream>
using namespace std;

// The user inputs will be hour value and the minute value.
// The possible value of hours can be from 0 to 23 (if (myHour <= 23&&myHour >= 0).
// The functionality of the if-statement is such that it evaluates the response, if true, then the immediate code block after the if-statement will be followed.


void display_time(int Hours, int Mins);


int main () {
	int myHour, myMins;
	cout << "Time Display Program!" << endl << endl;
	cout << "Enter the number of hours: ";
	cin >> myHour;
	cout << "Enter the number of minutes: ";
	cin >> myMins;
	
	// Going into the outer if-statement; whereby it evaluates the correct input of hour.
	if (myHour <= 23&&myHour >= 0) {
		if (myMins <= 59&&myMins >= 0) {
			if (myHour <= 12) {
				cout << "The Time Is : " << myHour << ":" << myMins << " AM " << endl;
			}
			else {
					cout << "The Time Is : " << myHour-12 << ":" << myMins << " PM " << endl;
				
			}
		}
		else {
			cout << "Invalid Input! Kindly Try Again. " << endl;
		}
	}
	else {
		cout << "Invalid Input for hour! Kindly Try Again. " << endl;
	}
	
	
	return 0;
	
}
*/

#include <iostream>
using namespace std;

// The user inputs will be hour value and the minute value.
// The possible value of hours can be from 0 to 23 (if (myHour <= 23&&myHour >= 0).
// The functionality of the if-statement is such that it evaluates the response, if true, then the immediate code block after the if-statement will be followed.


void display_time(int Hours, int Mins);


int main () {
	int myHour, myMins;
	cout << "Time Display Program!" << endl << endl;
	cout << "Enter the number of hours: ";
	cin >> myHour;
	cout << "Enter the number of minutes: ";
	cin >> myMins;
	
	// The correct syntax to follow when dealing with void functions is just simply writing the function NAME, and passing the input parameters.
	display_time(myHour, myMins); 
	// Calling the function above;
	
	return 0;
	
}


void display_time(int Hour, int Mins) {
		// Going into the outer if-statement; whereby it evaluates the correct input of hour.
	if (Hour <= 23&&Hour >= 0) {
		if (Mins <= 59&&Mins >= 0) {
			if (Hour <= 12) {
				
				cout << "The Time Is : " << Hour << ":" << Mins << " AM " << endl;
			}
			else {
					cout << "The Time Is : " << Hour-12 << ":" << Mins << " PM " << endl;
					// Hour-12 is done, because its a sleak way around the pattern observed after 12, and the corresponding numbers to the time.
					// 13-12=1, 14-12=2, and so on.
			}
		}
		else {
			cout << "Invalid Input! Kindly Try Again. " << endl;
		}
	} // This curly bracket corresponds to the outer statement.
	else {
		cout << "Invalid Input for hour! Kindly Try Again. " << endl;
	}
}
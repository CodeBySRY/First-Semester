#include <iostream>
using namespace std;
// A program to determine whether an year that is input by the user is a Leap Year or not,

int main () {
  int myInput;
  cout << "Welcome!" << '\n';
  cout << "A Leap Year has 366 days (the extra day is the 29th of February)." << '\n';
  cout << "Lets find out whether a year that we input is a Leap Year or not." << '\n';
  cout << "Kindly Specify How Many Number Of Years You Wish To Input : ";
  cin >> myInput;
  int x = 1;
  // An initialization is made before going into the while loop.
  // Using A Definite Loop;
  while (x <= myInput) {
    int myYear;
    cout << "Kindly Enter A Year : ";
    cin >> myYear;
    if (myYear <= 9999&&myYear >= 0) {
      // The above conditions checks whether the number entered is exactly 4-digit or less or not.
      if (myYear % 4 == 0&&myYear % 100 != 0 ||myYear % 400 == 0) {
        // The above condition checks for the conditions applied to Leap Years.
        cout << myYear << " is a Leap Year. " << '\n';
      }
      else {
        cout << myYear << " is NOT a Leap Year. " << '\n';
      }
    }
    else {
      cout << "Invalid Input!" << '\n' << "Kindly Input A 4 Digit Number." << '\n';
      x--;
      // The x-- is responsible for not taking the invalid input into account in myInput, when the body of the code is run.
      
    }
    ++x;
  }
  return 0;
}
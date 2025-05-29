#include <iostream>
using namespace std;

// Developing A Simple Console Application To Manage Student Grades
// Inputs are to be students registration #s and grades
// Then, we need to calculate the average grade for EACH student
// Then, determine if they are eligible for honours based on that average 
// (CRITERIA - Average Grade >= 90)

int main() {
    int RegNum;
    int myAverage;
    int myGrade;
    int myInput;
    cout << "\nWelcome!" << endl;
    cout << "Enter the # of students you wish to input: ";
    int userChoice;
    cin >> userChoice;
    
    for (int i = 0; i < userChoice; i++) {
        // This for loop is defined for a specific number of students that can be input;
        // Basically, this ensures the freedom of the user
        int sum = 0; // Initialize sum to 0 for each new student
        
        
        cout << "Kindly Enter The Registration # Of The Student: ";
        cin >> RegNum;
        cout << "Enter The Number Of Subjects: ";
        cin >> myInput;
        
        int x = 1; // Counter for subjects
        // Using A Definite Loop to collect grades
        while (x <= myInput) {
            cout << "Kindly Enter The Grade For Subject " << x << ": ";
            cin >> myGrade;
            sum += myGrade;
            x++;
        }
        
        myAverage = sum / myInput;
        cout << "\nThe Average Of The Grades Is: " << myAverage << endl;
        
        if (myAverage >= 90) {
            cout << "Congratulations! This Student Qualifies For Honors." << endl;
        }
        else {
            cout << "This Student DOES NOT Qualify For Honors." << endl;
        }
    }
    
    return 0;
}
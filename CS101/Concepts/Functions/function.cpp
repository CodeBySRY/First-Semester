#include <iostream>
using namespace std;
// Developing A Program To Input the values of m, x and c of the straight line equation and compute 'y' - USING FUNCTIONS;
float compute_y (float m, float x, float c);
// In the above line, the function prototype exists. There is no definition/code block of the function. 
// It just declares the function.
float y; // Declaring y before the main function body allows it to become a global variable and therefore, it can be used anywhere in the code below, without the need of declaring it.

int main () {
    // Using the float data type, as it allows us to input and work with decimal values.
    float m;
    float x;
    float c;
    cout << "Enter the # of computations you wish to carry out: ";
    int userChoice;
    cin >> userChoice;
    for (int i = 0; i < userChoice; i++) {
        cout << "Let's Compute The Value Of Y!" << endl;
    cout << "Kindly Input The Value Of x: ";
    cin >> x;
     cout << "Kindly Input The Value Of m: ";
    cin >> m;
     cout << "Kindly Input The Value Of c: ";
    cin >> c;
    cout << "The Equation Of Your Line Is: " << endl << " y = " << m << "x + " << c << endl;
    // The line below is extremely crucial;
    float y = compute_y(m,x,c);
    // Calling the function before it is defined;
    // We call the function 'compute_y' with arguments being the input values by the user.
    
    // Now, we print the result.
    cout << "The Value Of y = " << y << endl;
    }
   
    return 0;
}
// Below is the function definition of 'compute_y';
// The syntax for this is the same as the initial function prototype, but this one contains the code block as well.
float compute_y (float m, float x, float c) { // Same as initially, NOTHING IS TO BE CHANGED.
// This part of the program is responsible for the mathematical logic of the code; it returns the value of y, after performing the necessary mathematical calculations, which are defined in this code.
    return y = (m*x)+c;
    
}

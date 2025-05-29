#include <iostream>
using namespace std;

// Writing A Program To Study Increment Operators (++x/x++);

int main () {
    int myInput;
    cout << "Kindly Enter Any # : ";
    cin >> myInput;
    int z = myInput++;
    // Here, IN POST-INCREMENT, z is assigned the current value of myInput (basically the value input by the user ) and myInput is incremented by 1.
    // The value of myInput is updated by +1.
    // After the previous code block followed, the value of myInput = myInput + 1.
    // It is this value that will be used everywhere below, where the code follows.

    int y = ++myInput; // Here, IN PRE-INCREMENT, myInput is incremented first, basically (myInput + 1) + 1, then y is assigned this value.

    cout << "After Post-Increment (x++) : " << z << endl; // Since it is post-incremented in z, the output will be = myInput.

    cout << "After Pre-Increment (++x) : " << y << endl; // Since it is pre-incremented in y, the output will be = (myInput + 1) + 1.

    return 0;
}
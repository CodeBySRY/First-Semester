#include <iostream>
using namespace std;

int main () {
    int myInput;
    cout << "Kindly Enter The # Of Rows To Print: ";
    cin >> myInput;
    for (int i = 1; i <= myInput; i++) { // This Outer loop controls the rows of the triangle.
    // The outer loop iterates from i = 0 to the input digit, including it.
        for (int j = i; j <= myInput; j++) { // This Inner loop controls the columns of the triangle.
        cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
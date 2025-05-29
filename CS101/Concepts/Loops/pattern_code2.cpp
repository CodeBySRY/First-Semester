#include <iostream>
using namespace std;
// Printing the INVERTED Triangle
int main () {
    int myInput;
    cout << "Kindly Enter The # Of Rows To Print: ";
    cin >> myInput;
    for (int i = 1; i <= myInput; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
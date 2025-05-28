#include <iostream>
using namespace std;

// Program To Check Whether The Input Number Is Prime #;
// By definition, prime numbers are greater than 1 ( > 1).

// To check if a number X is Prime or not, we only need to check if it is divisible by any number from 2 upto X^1/2.

bool CheckPrime(int myNum) {
    if (myNum <= 1) return false; // 0 and 1 are not prime numbers
    for (int i = 2; i * i <= myNum; i++) {
        if (myNum % i == 0) return false; // Found a divisor, not prime
    }
    return true; // No divisors found, it's prime
}

int main() {
    int myInput;
    int userChoice;
    cout << "Developing A Program To Check Whether A # Is Prime..." << endl;
    cout << "Enter the # of integers you wish to check: ";
    cin >> userChoice;
    for (int i = 0; i < userChoice; i++) {
        cout << "Kindly Enter A Number: ";
    cin >> myInput;

    if (CheckPrime(myInput)) {
        cout << myInput << " is a Prime Number." << endl;
    } 
    else {
        cout << myInput << " is NOT a Prime Number." << endl;
    
    }
    

   
}
 return 0;
}
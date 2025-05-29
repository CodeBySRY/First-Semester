#include <iostream> 
using namespace std; 

// Developing A Banking System Where Users Can Request Adjustments To Their Account Balances

// First function - Call by Value (no ampersand)
int myBalance(int t1) {  // t1 = temporary1 (for human understanding)
    t1 = t1 * 2; 
    // This function is using call by value, hence no ampersand symbol
    return t1;
} 

// Second function - Call by Reference (with ampersand)
int my_Balance(int &p1) {  // p1 = permanent1 (for human understanding)
    // The Ampersand (&) symbol indicates parameters are passed by reference
    // This modifies the original variable
    p1 = p1 * 2; 
    // This function is using call by reference, hence the ampersand symbol
    return p1;
} 

int main() { 
    int myAccount; 
    
    cout << "Kindly Enter Your Account Balance : "; 
    cin >> myAccount; 
    
    // First function demonstration
    cout << "\nConsidering The First Function (Call by Value)..." << endl; 
    cout << "Your Account Balance BEFORE Calling The Function Is : " << myAccount << endl; 
    myBalance(myAccount); 
    cout << "Your Account Balance AFTER Calling The Function Is : " << myAccount << endl; 
    
    // Second function demonstration
    cout << "\nConsidering The Second Function (Call by Reference)..." << endl; 
    cout << "Your Account Balance BEFORE Calling The Function Is : " << myAccount << endl; 
    my_Balance(myAccount); 
    cout << "Your Account Balance AFTER Calling The Function Is : " << myAccount << endl; 
    
    // Two functions can be called within the body of the main code block,
    // but in the correct sequence to ensure the correct output
    return 0; 
}
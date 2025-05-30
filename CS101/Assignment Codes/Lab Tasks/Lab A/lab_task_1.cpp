#include <iostream> 
using namespace std; 

// Developing A System To Manage Two Bank Accounts 
void interchange(int &b1, int &b2) { 
    // Using Call By Reference 
    // In call by reference, we pass the arguments by reference instead of values 
    // A new variable, i, is taken which helps in swapping 
    int i = b1; 
    // Now, the value of b1 is stored (temporarily) in i 
    b1 = b2; 
    // Now, the value of b2 is assigned to b1, whose value is stored in i 
    b2 = i; 
    // Now, the value of i, which holds the value of b1, is stored in b2 
    // This way, the swapping process holds true and is completed 
} 

int main() { 
    int myBalance1; 
    int myBalance2; 
    
    cout << "We need to recover two bank balances due to errors in transaction processing." << endl; 
    cout << "Kindly Enter The Balance Of The First Account : "; 
    cin >> myBalance1; 
    cout << "Kindly Enter The Balance Of The Second Account : "; 
    cin >> myBalance2; 
    
    // Calling The Function NOW, because the code block that will follow will follow through with the functions code block 
    interchange(myBalance1, myBalance2); // Here, the error shouldn't be made to write the swapped myBalance 
    // Since we are calling the function and the function already performs the necessary swaps, we don't need to manually perform it here 
    
    cout << "Rectifying The Errors In Transaction Processing..." << endl; 
    cout << "Recovering..." << endl; 
    cout << "Swapping The Balances..." << endl; 
    cout << "The Bank Balance Of The First Account IS OFFICIALLY : " << myBalance1 << "$" << endl; 
    cout << "The Bank Balance Of The Second Account IS OFFICIALLY : " << myBalance2 << "$" << endl; 
    
    return 0; 
}
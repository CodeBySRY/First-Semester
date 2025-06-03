#include <iostream>
using namespace std;


// Whenever decrementing the iterative variable in a for loop, make sure the signs are reversed.
int factorial(int n) {
	int ans = 1;
	for (int i = n; i >= 1; i--) {
		ans = ans*i;
	}
	
	return ans;
}

int main () {
	int n;
	cout << "enter a num: ";
	cin >> n;
	
	int result = factorial(n);
	cout << "FACTORIAL = " << result;
	
	
}
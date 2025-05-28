#include <iostream>
#include <cmath>
using namespace std;

// In this program, we will include <cmath> library, as square root function is required in the distance formula.



double CalcDist(double x1, double y1, double x2, double y2);
// Above is the function prototype, with its name as 'CalcDist'.

int main () {
	double x1, x2, y1, y2, distance;
	cout << "Program To Find The Distance B/W Two Points!" << endl << endl;
	cout << "Enter the first coordinate : ";
	cin >> x1 >> y1;
	cout << "Enter the second coordinate : ";
	cin >> x2 >> y2;
	
	cout << "(x1,y1) = " << "(" << x1 << "," << y1 << ")" << endl;
	cout << "(x2,y2) = " << "(" << x2 << "," << y2 << ")" << endl << endl;
	
	// When performing a mathematical operation, and the data type of the function is not void, a seperate variable is declared and it is equated to the function call.
	distance = CalcDist(x1, y1, x2, y2);
	
	return 0;
	
}


double CalcDist(double x1, double y1, double x2, double y2) {
	double part1, part2, answer;
	part1 = (x2-x1)*(x2-x1);
	part2 = (y2-y1)*(y2-y1);
	// Two seperate operations are performed through two seperate variables for ease of use in the square root function.
	answer = sqrt(part1+part2);
	cout << "The Distance b/w the points is = " << answer << " units" << endl;
	
}
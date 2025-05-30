// char = 'a'
// The modulus function works in a way that any integer n will give output(s) till n-1.
// int z = x + a; (This seems that an error will be output but instead, the compiler will convert the character into it's integer value of the ASCI code.)
// return (x > y)?x : y; (This makes use of the TERNARY operator - it means that if x is greater than y, then output x, else, y.)
// #include <iomanip> (This is used when the rand() function is to be used).

// #include <cmath> (This is used when mathematical functions, such as sqrt(), is to be used.


#include <iostream>
#include <cmath>
// Developing A Program To Create A Function That Calculates Area;
// ...Of Various Geometrical Objects.

float calculateArea(int myRadius);
float calculateArea(int myLength, int myWidth);
float calculateArea(int side1, int side2, int side3);


using namespace std;

int main () {
	int myR, Length, Width, s1, s2, s3;
	float AC, AR, AT; // For human comprehension, AC, for example, corresponds to Area of Circle.
	cout << "Lets Calculate The Area Of A Circle!" << endl;
	cout << "Enter The Radius Of The Circle: ";
	cin >> myR;
	AC = calculateArea(myR); // The function is being called here.
	cout << "Area = " << AC << endl;
	cout << "Lets Calculate The Area Of A Rectangle!" << endl;
	cout << "Enter The Width: ";
	cin >> Width;
	cout << "Enter The Length: ";
	cin >> Length;
	AR = calculateArea(Length, Width);
	cout << "Area = " << AR << endl;
	cout << "Lets Calculate The Area Of A Triangle!" << endl;
	cout << "Enter Side 1: ";
	cin >> s1;
	cout << "Enter Side 2: ";
	cin >> s2;
	cout << "Enter Side 3: ";
	cin >> s3;
	AT = calculateArea(s1, s2, s3);
    cout << "Area = " << AT << endl;
	
	return 0;
	
}

float calculateArea(int myRadius) {
	float const PI = 3.142;
	float answer = PI * myRadius * myRadius;
	return answer;
}
float calculateArea(int myLength, int myWidth) {
	float answer = myLength * myWidth;
		return answer;
}
float calculateArea(int side1, int side2, int side3) {
	int s = (side1+side2+side3)/2;
	float answer1 = (s*(s-side1)*(s-side2)*(s-side3));
	float answer = sqrt(answer1);
	// The sqrt function cannot hold a syntax such that the whole computation is performed in it.
	// A seperate variable is to be declared and and then, that is to be input into the sqrt() function, such as done above.
		return answer;
}


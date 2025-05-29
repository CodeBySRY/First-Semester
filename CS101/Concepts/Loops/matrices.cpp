#include <iostream>
using namespace std;

int main () {
	int r,c;
	cout << "Enter # of rows : ";
	cin >> r;
	cout << "Enter # of columns : ";
	cin >> c;
	int Matrix[r][c];
	cout << "Enter the elements row wise: " << endl;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> Matrix[i][j];
		}
	}
	cout << "Matrix: " << endl;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout << Matrix[i][j] << " ";
		}
		cout << endl;
	}
	
	
	return 0;
	
	
}
#include <iostream>
#include <cstdlib> // Necessary for using the qsort() function;

using namespace std;

int compare(const void *a, const void *b);

void DisplayArr(int arr[], int size);

void MaxOfArr(int size, int a[]);

void MinOfArr(int size, int a[]);


int main () {
	
	int UserInput;
	cout << "Enter the size of the array: ";
	cin >> UserInput;
	int arr[UserInput];
	cout << "Input The Elements: " << '\n';
	for (int i = 0; i < UserInput; i++) {
		cout << "Element # " << i+1 << " : ";
		cin >> arr[i];
	}
	
	cout << '\n';
	cout << "BEFORE SORTING: \n";
	DisplayArr(arr, UserInput);
	
	qsort(arr, UserInput, sizeof(int), compare);
	
	cout << '\n';
	cout << "AFTER SORTING: \n";
	DisplayArr(arr, UserInput);
	
	cout << '\n';
	MaxOfArr(UserInput, arr);
	MinOfArr(UserInput, arr);
	
	return 0;
}


int compare(const void *a, const void *b) {
	const int *x = (int*) a;
	const int *y = (int*) b;
	
	if (*x > *y) {
		return 1;
	}
	else if (*x < *y) {
		return -1;
		
	}
	
	return 0;
}


void DisplayArr(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "Element # " << i+1 << " : " << arr[i] << '\n';
	}
}

void MaxOfArr(int size, int a[]) {
	a[size];
	int max;
	
	for (int i = 0; i < size; i++) {
		max = a[i];
		if (max > a[i+1]) {
			cout << max << " is the largest. " << endl;
			break;
		}
		
	}	
}

void MinOfArr(int size, int a[]) {
	a[size];
	int min;
	
	for (int i = 0; i < size; i++) {
		min = a[i];
		if (min < a[i+1]) {
			cout << min << " is the smallest. " << endl;
			break;
		}
		
	}	
}
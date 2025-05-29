#include <iostream>
using namespace std;

void SelectionSort(int arr[], string stuName[], int x);


int main () {
	int numOfstudents;
	int marks[100];
	string stuName[100];
	
	
	cout << "Enter the number of students: ";
	cin >> numOfstudents;
	cin.ignore();
	
	for (int i = 0; i < numOfstudents; i++) {
		cout << "Enter the student name: ";
		getline(cin, stuName[i]);
		cout << "Enter the marks of the student: ";
		cin >> marks[i];
		cin.ignore();
		cout << endl;
	}
	
	
	SelectionSort(marks, stuName, numOfstudents);
	
	cout << "SORTED Data " << endl;
	cout << "----------- " << endl;
	
	
	for (int i = 0; i < numOfstudents; i++) {
        cout << "STUDENT # " << i+1 << endl;
		cout << "Student Name: ";
		cout << stuName[i];
		cout << endl;
		cout << "Marks: ";
		cout << marks[i];
		cout << endl;
	}
	
}



void SelectionSort(int arr[], string stuName[], int x) {
	int min_pos; // Variable to keep track of the index of the minimum value in the unsorted portion of the array;
	for (int i = 0; i < (x-1); i++) {
		min_pos = i;
		
		for (int j = i+1; j < x; j++) {
			if (arr[j] > arr[min_pos]) { 
			min_pos = j;
		}
	}
	
	if (min_pos!=i) {
		int temp = arr[min_pos];
		arr[min_pos] = arr[i];
		arr[i] = temp;
		
		
		string tempName = stuName[min_pos];
		stuName[min_pos] = stuName[i];
		stuName[i] = tempName;
		
	}
	
}

}
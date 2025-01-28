#include <iostream>

using namespace std;

int main() { 
	// Program using arrays
	const int STUDENTS = 5;
	int grades[STUDENTS] = {90, 100, 80, 60, 70};

	// Output grades
	for (int i = 0; i < STUDENTS; i++) {
		cout << "Student " << i + 1 << " grade: " << grades[i] << endl;
	}
	cout << "\n" << endl; // formatting

	// Program without arrays
	int grade1 = 90, 
		grade2 = 100, 
		grade3 = 80, 
		grade4 = 60, 
		grade5 = 70;

	// Output grades
	cout << "Student 1 grade: " << grade1 << endl;
	cout << "Student 2 grade: " << grade2 << endl;
	cout << "Student 3 grade: " << grade3 << endl;
	cout << "Student 4 grade: " << grade4 << endl;
	cout << "Student 5 grade: " << grade5 << endl;

	return 0;
}
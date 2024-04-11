#include <iostream>
using namespace std;

bool checkYear(int year) {
	// Leap year condition: 
	// 1. If the year is divisible by 4 and not divisible by 100, or
	// 2. If the year is divisible by 400.

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		return true;
	} else {
		return false;
	}
}

int main() {
	int year;
    cout<<"Enter Year: ";
    cin>>year;

	if (checkYear(year)) {
		cout << "Leap Year" << endl;
	} else {
		cout << "Not a Leap Year" << endl;
	}

	return 0;
}

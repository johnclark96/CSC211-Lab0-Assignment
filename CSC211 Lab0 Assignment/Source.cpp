#include <iostream>

using namespace std;

int main() {

	int month = 0;
	int date = 0;
	int year = 0;

	cout << "Please Enter Todays Date" << endl;
	cin >> month >> date >> year;
	cout << month << "/" << date << "/" << year << endl;

	if (year % 4 == 0) {
		if (year % 100 == 0) {
			if (year % 400 == 0) {
				cout << year << " is leap year" << endl;
			}
			else {
				cout << year << " is not leap year" << endl;
			}
		}
		else {
			cout << year << " is leap year" << endl;
		}
	}
	else {
		cout << year << " is not leap year" << endl;
	}

	system("PAUSE");
	return 0;
}
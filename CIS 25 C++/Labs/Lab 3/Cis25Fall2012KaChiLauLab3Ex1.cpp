/**
*Program Name: cisFall2012kachilauLab3Ex1.cpp
*Discussion:   Lab#3 Ex1
*author:       KaChiLau
*Date:         09/19/2012
*/

#include <iostream>
using namespace std;

void displayinfo(void);
void menudisplay(void);
void analyzeIntegerKaChiLau(void);
void analyzeIntegerSeriesKaChiLau(void);
void extractoddevenposneg(int);
void extractleastandmost(int);
void extractlargest(int);
void extractsmallest(int);
void extractsum(int);
void ptrlargest(int*, int);
void ptrsmallest(int*, int);

int main() {

	displayinfo();
	menudisplay();

	return 0;
}

void displayinfo() {
	
	cout << "Class information --" << "\n";
	
	cout << "  CIS 25 C ++ Programming" << "\n";
	
	cout << "  Laney College\n" << "\n";
	
	cout << "Assignment Information --" << "\n";

	cout << "  Assignment Number:  Lab 03 Exercise #1" << "\n";
	
	cout << "  Written by:		   KaChiLau" << "\n";
	
	cout << "  Due Date:		   September 27, 2012\n" << "\n";

	return;
}

void menudisplay() {

	int option;

	do {
		cout << "*********************************************" << "\n"
			<< "*                  MENU                     *" << "\n"
			<< "* 1. Calling analyzeIntegerKaChiLau()       *" << "\n"
			<< "* 2. Calling analyzeIntegerSeriesKaChiLau() *" << "\n"
			<< "* 3. Quit                                   *" << "\n"
			<< "*********************************************\n" << endl;

		cout << "Select an option (1 , 2 or 3): ";
		cin >> option;

		switch (option) {
		case 1:
			analyzeIntegerKaChiLau();
			break;
		case 2:
			analyzeIntegerSeriesKaChiLau();
			break;
		case 3:
			cout << "\nHave Fun...\n" << endl;
			break;
		default:
			cout << "\nWRONG OPTION!\n" << endl;
		}

	} while (option != 3);


	return;
}

//fucntion inlcude calculation functions
void analyzeIntegerKaChiLau() {

	int klx;

	cout << "  Enter an integer: ";
	cin >> klx;

	extractoddevenposneg(klx);

	extractleastandmost(klx);

	extractsmallest(klx);

	extractlargest(klx);

	extractsum(klx);

	return;
}

void analyzeIntegerSeriesKaChiLau() {

	int size;
	int* ptr;
	int i;

	cout << "  How many integer? ";
	cin >> size;

	ptr = new int[size];
	
	for (i = 0; i < size; i++) {
		cout << "    Enter integer #" << i + 1 << " : ";
		cin >> *(ptr + i);
	}

	ptrsmallest(ptr, size);

	ptrlargest(ptr, size);

	return;
}

//calculation functions
//For analyzeIntegerKaChiLau()
void extractoddevenposneg(int arg) {

	if ((arg > 0) && (arg % 2 == 0)) {
		cout << "\n  " << arg << " is an even and non-negative number.\n" << endl;
	} else if ((arg < 0) && (arg % 2 == 0)) {
		cout << "\n  " << arg << " is an even and negative number.\n" << endl;
	} else if ((arg > 0) && (arg % 2 != 0)) {
		cout << "\n  " << arg << " is an odd and non-negative number.\n" << endl;
	} else if ((arg < 0) && (arg % 2 != 0)) {
		cout << "\n  " << arg << " is an odd and negative number.\n" << endl;
	} else {
		cout << "\n  " << arg << " is even number.\n" << endl;
	}

	return;
}

void extractleastandmost(int arg) {

	int most;

	if (arg < 0) {
		arg = -arg;
	}

	cout << "  " << "The least significant digit: " << arg % 10 << endl;

	most = 0;
	while (arg != 0) {

		most = arg % 10;

		arg /= 10;
	}

	cout << "  " << "The most significant digit: " << most << "\n" << endl;


	return;
}

void extractlargest(int arg) {

	int largest;
	int kli;

	if (arg == 0) {
		largest = 0; 
	} else {
		largest = -10;
	}

	if (arg < 0) {
		arg = -arg;
	}

	while (arg != 0) {

		kli = arg % 10;

		if (kli > largest) {
			largest = kli;
		}

		arg /= 10;
	}

	cout << "  " << "The largest digit: " << largest << "\n" << endl;

	return;
}

void extractsmallest(int arg) {

	int smallest;
	int kli;

	if (arg == 0) {
		smallest = 0; 
	} else {
		smallest = 10;
	}

	if (arg < 0) {
		arg = -arg;
	}

	while (arg != 0) {

		kli = arg % 10;

		if (kli < smallest) {
			smallest = kli;
		}

		arg /= 10;
	}

	cout << "  " << "The smallest digit: " << smallest << endl;

	return;
}

void extractsum(int arg) {

	int sum;
	int kli;

	if (arg < 0) {
		arg = -arg;
	}

	sum = 0;
	kli = 0;
	while (arg != 0) {

		kli = arg % 10;

		sum += kli;

		arg /= 10;
	}

	cout << "  " << "The sum of all digit(s): " << sum << "\n" << endl;

	return;
}

//For analyzeIntegerSeriesKaChiLau()

void ptrlargest(int* ptr, int size) {
	
	int largest = -10;
	int i;
	int temp;
	int j;

	for (i = 0; i < size; i++) {

		temp = *(ptr + i);

		if (temp < 0) {
			temp = -temp;
		}

		while (temp != 0) {

			if (temp == 0) {
				largest = 0;
			}

			j = temp % 10;

			if (j > largest) {
				largest = j;
			}

			temp /= 10;
		}
	}

	cout << "  The largest digit: " << largest << endl;

	cout << "    Digit " << largest << " can be found in integer number(s): ";

	for(i = 0, j = 0; i < size; i++ ) {

		temp = *(ptr + i);

		if (temp < 0) {
			temp = -temp;
		}

		while (temp != 0) {

			j = temp % 10;
			
			if (j == largest) {	
				cout << i + 1 << ", ";
				break;
			}

			temp /= 10;
		}
	}

	cout << "\n" << endl;

	return;
}

void ptrsmallest(int* ptr, int size) {

	int smallest = 10;
	int i;
	int temp;
	int j;

	for (i = 0; i < size; i++) {

		temp = *(ptr + i);

		if (temp < 0) {
			temp = -temp;
		}

		while (temp != 0) {

			if (temp == 0) {
			smallest = 0;
			}

			j = temp % 10;

			if (j < smallest) {
				smallest = j;
			}

			temp /= 10;
		}
	}

	cout << "\n  The smallest digit: " << smallest << endl;

	cout << "    Digit " << smallest << " can be found in integer number(s): ";

	for(i = 0, j = 0; i < size; i++ ) {

		temp = *(ptr + i);

		if (temp < 0) {
			temp = -temp;
		}

		while (temp != 0) {

			j = temp % 10;
			
			if (j == smallest) {	
				cout << i + 1 << ", ";
				break;
			}

			temp /= 10;
		}
	}

	cout << "\n" << endl;

	return;
}

/*OUTPUT

Class information --
  CIS 25 C ++ Programming
  Laney College

Assignment Information --
  Assignment Number:  Lab 03 Exercise #1
  Written by:              KaChiLau
  Due Date:                September 27, 2012

*********************************************
*                  MENU                     *
* 1. Calling analyzeIntegerKaChiLau()       *
* 2. Calling analyzeIntegerSeriesKaChiLau() *
* 3. Quit                                   *
*********************************************

Select an option (1 , 2 or 3): 4

WRONG OPTION!

*********************************************
*                  MENU                     *
* 1. Calling analyzeIntegerKaChiLau()       *
* 2. Calling analyzeIntegerSeriesKaChiLau() *
* 3. Quit                                   *
*********************************************

Select an option (1 , 2 or 3): -1

WRONG OPTION!

*********************************************
*                  MENU                     *
* 1. Calling analyzeIntegerKaChiLau()       *
* 2. Calling analyzeIntegerSeriesKaChiLau() *
* 3. Quit                                   *
*********************************************

Select an option (1 , 2 or 3): 1
  Enter an integer: 12735

  12735 is an odd and non-negative number.

  The least significant digit: 5
  The most significant digit: 1

  The smallest digit: 1
  The largest digit: 7

  The sum of all digit(s): 18

*********************************************
*                  MENU                     *
* 1. Calling analyzeIntegerKaChiLau()       *
* 2. Calling analyzeIntegerSeriesKaChiLau() *
* 3. Quit                                   *
*********************************************

Select an option (1 , 2 or 3): 2
  How many integer? 2
    Enter integer #1 : 12795
    Enter integer #2 : -2794

  The smallest digit: 1
    Digit 1 can be found in integer number(s): 1,

  The largest digit: 9
    Digit 9 can be found in integer number(s): 1, 2,

*********************************************
*                  MENU                     *
* 1. Calling analyzeIntegerKaChiLau()       *
* 2. Calling analyzeIntegerSeriesKaChiLau() *
* 3. Quit                                   *
*********************************************

Select an option (1 , 2 or 3): 2
  How many integer? 3
    Enter integer #1 : 12795
    Enter integer #2 : -20784
    Enter integer #3 : -27904

  The smallest digit: 0
    Digit 0 can be found in integer number(s): 2, 3,

  The largest digit: 9
    Digit 9 can be found in integer number(s): 1, 3,

*********************************************
*                  MENU                     *
* 1. Calling analyzeIntegerKaChiLau()       *
* 2. Calling analyzeIntegerSeriesKaChiLau() *
* 3. Quit                                   *
*********************************************

Select an option (1 , 2 or 3): 3

Have Fun...

*/
/**
*Project Name: Cis25Fall2012KaChiLauLab2Ex1.cpp
*Dicussion:    Lab#2 Ex1
*Author        KaChiLau
*Date:         9/08/12
*/

#include <iostream>
using namespace std;

void displayinfo(void);
void Menudisplay(void);
void analyzeIntegerKaChiLau(void);
void oddevenposneg(int);
void leastandmost(int);
void max(int);
void min(int);
void add(int);

int main() {

	displayinfo();

	Menudisplay();
	
	return 0;
}

void displayinfo() {
	
	cout << "Class information --" << endl;

	cout << "  CIS 25 C ++ Programming" << endl;

	cout << "  Laney College\n" << endl;

	cout << "Assignment Information --" << endl;

	cout << "  Assignment Number:  Lab 02 Exercise #1" << endl;

	cout << "  Written by:		   KaChiLau" << endl;

	cout << "  Due Date:		   September 18, 2012\n" << endl;

	return;
}

void Menudisplay() {

	int option;

	do{
		cout << "***************************************" << endl;
		cout << "*                  MENU               *" << endl;
		cout << "* 1. Calling analyzeIntegerKaChiLau() *" << endl;
		cout << "* 2. Quit                             *" << endl;
		cout << "***************************************" << endl;
		cout << "                                       " << endl;

		cout << "Select an option (1 or 2): ";
		cin >> option;

		switch(option) {
		case 1:
			analyzeIntegerKaChiLau();
			break;
		case 2:
			cout << "\nHave Fun...\n" << endl;
			break;
		default:
			cout << "\nWRONG OPTION!\n" << endl;
		}

	} while(option != 2);


	return;
}

void analyzeIntegerKaChiLau() {

	int klx;

	cout << "  Enter an integer: ";
	cin >> klx;
	
	oddevenposneg(klx);

	leastandmost(klx);

	min(klx);

	max(klx);

	add(klx);
	
	return;
}

void oddevenposneg(int klx) {

	cout << " " << endl;
	
	if ((klx > 0) && (klx % 2 == 0)) {
		cout << "  " << klx << " is an even and non-negative number." << endl;
	} else if ((klx < 0) && (klx % 2 == 0)) {
		cout << "  " << klx << " is an even and negative number." << endl;
	} else if ((klx > 0) && (klx % 2 != 0)) {
		cout << "  " << klx << " is an odd and non-negative number." << endl;
	} else if ((klx < 0) && (klx % 2 != 0)) {
		cout << "  " << klx << " is an odd and negative number." << endl;
	} else {
		cout << "  " << klx << " is even number." << endl;
	}

	cout << " " << endl;

	return;
}

void leastandmost(int klx) {

	int kli;

	if (klx < 0) {
		klx = -klx;
	}

	cout << "  " << "The least significant digit: " << klx % 10 << endl;

	kli = 0;
	while (klx != 0) {

		kli = klx % 10;

		klx = klx / 10;
	}

	cout << "  " << "The most significant digit: " << kli << "\n" << endl;

	return;
}

void max(int klx) {

	int klmax;
	int kli;

	if (klx == 0) {
		klmax = 0; 
	} else {
		klmax = -10;
	}

	if (klx < 0) {
		klx = -klx;
	}

	while (klx != 0) {

		kli = klx % 10;

		if (kli > klmax) {
			klmax = kli;
		}

		klx = klx / 10;
	}

	cout << "  " << "The largest digit: " << klmax << "\n" << endl;

	return;
}

void min(int klx) {

	int klmin;
	int kli;

	if (klx == 0) {
		klmin = 0; 
	} else {
		klmin = 10;
	}

	if (klx < 0) {
		klx = -klx;
	}

	while (klx != 0) {

		kli = klx % 10;

		if (kli < klmin) {
			klmin = kli;
		}

		klx = klx / 10;
	}

	cout << "  " << "The smallest digit: " << klmin << endl;

	return;
}

void add(int klx) {

	int klz;
	int kli;

	if (klx < 0) {
		klx = -klx;
	}

	kli = 0;
	klz = 0;
	while (klx != 0) {

		klz = klx % 10;

		kli += klz;

		klx = klx / 10;
	}

	cout << "  " << "The sum of all digit(s): " << kli << "\n" << endl;

	return;
}

/**OUTPUT

Class information --
  CIS 25 C ++ Programming
  Laney College

Assignment Information --
  Assignment Number:  Lab 02 Exercise #1
  Written by:              KaChiLau
  Due Date:                September 18, 2012

***************************************
*                  MENU               *
* 1. Calling analyzeIntegerKaChiLau() *
* 2. Quit                             *
***************************************

Select an option (1 or 2): 3

WRONG OPTION!

***************************************
*                  MENU               *
* 1. Calling analyzeIntegerKaChiLau() *
* 2. Quit                             *
***************************************

Select an option (1 or 2): -1

WRONG OPTION!

***************************************
*                  MENU               *
* 1. Calling analyzeIntegerKaChiLau() *
* 2. Quit                             *
***************************************

Select an option (1 or 2): 1
  Enter an integer: 12735

  12735 is an odd and non-negative number.

  The least significant digit: 5
  The most significant digit: 1

  The smallest digit: 1
  The largest digit: 7

  The sum of all digit(s): 18

***************************************
*                  MENU               *
* 1. Calling analyzeIntegerKaChiLau() *
* 2. Quit                             *
***************************************

Select an option (1 or 2): 1
  Enter an integer: -2794

  -2794 is an even and negative number.

  The least significant digit: 4
  The most significant digit: 2

  The smallest digit: 2
  The largest digit: 9

  The sum of all digit(s): 22

***************************************
*                  MENU               *
* 1. Calling analyzeIntegerKaChiLau() *
* 2. Quit                             *
***************************************

Select an option (1 or 2): 1
  Enter an integer: -27904

  -27904 is an even and negative number.

  The least significant digit: 4
  The most significant digit: 2

  The smallest digit: 0
  The largest digit: 9

  The sum of all digit(s): 22

***************************************
*                  MENU               *
* 1. Calling analyzeIntegerKaChiLau() *
* 2. Quit                             *
***************************************

Select an option (1 or 2): 1
  Enter an integer: 0

  0 is even number.

  The least significant digit: 0
  The most significant digit: 0

  The smallest digit: 0
  The largest digit: 0

  The sum of all digit(s): 0

***************************************
*                  MENU               *
* 1. Calling analyzeIntegerKaChiLau() *
* 2. Quit                             *
***************************************

Select an option (1 or 2): 2

Have Fun...

*/
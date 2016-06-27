/**
*Project Name: cis25fall2012kachilaulec2101.cpp
*Dicussion:    Lab#1 Ex1
*Author        KaChiLau
*Date:         8/28/12
*/

#include <iostream>
using namespace std;

void displayinfo(void);
void oddevenposneg(int);
void leastandmost(int);
void max(int);
void min(int);
void add(int);

int main() {

	int klx;

	displayinfo();

	cout << "Enter an integer: ";
	cin >> klx;

	cout << " "<< endl;
	
	oddevenposneg(klx);

	cout << " "<< endl;

	leastandmost(klx);

	cout << " "<< endl;

	min(klx);

	max(klx);

	cout << " "<< endl;

	add(klx);

	return 0;
}

void displayinfo() {
	
	cout << "Class information --" << endl;

	cout << "  CIS 25 C ++ Programming" << endl;

	cout << "  Laney College" << endl;

	cout << " "<< endl;

	cout << "Assignment Information --" << endl;

	cout << "  Assignment Number:  Lab 01 Exercise #1" << endl;

	cout << "  Written by:		   KaChiLau" << endl;

	cout << "  Due Date:		   September 6, 2012" << endl;

	cout << " "<< endl;

	return;
}

void oddevenposneg(int klx) {
	
	if(klx != 0) {
		if(klx > 0) {
			if(klx % 2) {
				cout << klx << " is an odd and positive number." << endl;
			} else { 
				cout << klx << " is an even and positive number." << endl;
			}
		} else {
			if(klx % 2) {
				cout << klx << " is an odd and negative number." << endl;
			} else {
				cout << klx << " is an even and negative number." << endl;
			}
		}
	} else {
		cout << klx << " is zero." << endl;
	}

	return;
}

void leastandmost(int klx) {

	int kli;

	cout << "The least significant digit: " << klx % 10 << endl;

	kli = 0;
	while(klx != 0) {

		kli = klx % 10;

		klx = klx / 10;
	}

	cout << "The most significant digit: " << kli << endl;
	return;
}

void max(int klx) {

	int klmax;
	int kli;

	klmax = -10;
	while(klx != 0) {

		kli = klx % 10;

		if (kli > klmax) {
			klmax = kli;
		}

		klx = klx / 10;
	}

	cout << "The largest digit: " << klmax << endl;

	return;
}

void min(int klx) {

	int klmin;
	int kli;

	klmin = 10;
	while(klx != 0) {

		kli = klx % 10;

		if (kli < klmin) {
			klmin = kli;
		}

		klx = klx / 10;
	}

	cout << "The smallest digit: " << klmin << endl;

	return;
}

void add(int klx) {

	int klz;
	int kli;

	kli = 0;
	klz = 0;
	while(klx != 0) {

		klz = klx % 10;

		kli += klz;

		klx = klx / 10;
	}

	cout << "The sum of all digit(s): " << kli << endl;

	return;
}

/*OUTPUT

Class information --
  CIS 25 C ++ Programming
  Laney College

Assignment Information --
  Assignment Number:  Lab 01 Exercise #1
  Written by:              KaChiLau
  Due Date:                September 6, 2012

Enter an integer: 12745

12745 is an odd and positive number.

The least significant digit: 5
The most significant digit: 1

The smallest digit: 1
The largest digit: 7

The sum of all digit(s): 19
*/
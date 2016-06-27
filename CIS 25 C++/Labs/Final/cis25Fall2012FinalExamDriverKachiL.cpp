/**
*Program Name: cisFall2012FinalExamDriverKachiL.cpp
*Discussion:   Lab#5 Ex1
*author:       KaChiLau
*Date:         12/04/2012
*/

#include "FinalFractionKachiL.h"
#include "FinalPointKachiL.h"
#include "FinalRectangleKachiL.h"
#include "FinalBoxKachiL.h"
#include "FinalCircleKachiL.h"
#include "FinalCylinderKachiL.h"
//#include "Menu.h"

#include <iostream>
using namespace std;

void printMenu(void);
void menu(void);
void swap(FinalFractionKachiL&, FinalFractionKachiL&);
void getLargestAreaKachiL(FinalFractionKachiL[], int);
void getLargestVolumeKachiL(FinalFractionKachiL[], int);
void displayAreaKachiL(FinalFractionKachiL[], int);
void displayVolumeKachiL(FinalFractionKachiL[], int);

int main() { // 1. Do not change or modify the given statements.
// 2. Add code to perform the operations as
// instructed (the instructions are provided
// as comments or comment blocks)
	
	menu(); // Line 20000

	return 0; // Line 30000
}
void menu() { 

	cout << "Starting at Line 50:" << endl; // Line 50
	
	FinalFractionKachiL* fPtrA = new FinalFractionKachiL(4, 1); // Line 100
	
	cout << *fPtrA << endl; // display the information of the above object
	
	FinalFractionKachiL* fPtrB = new FinalFractionKachiL(3, 1); // Line 300
	
	cout << *fPtrB << endl; // display the information of the above object
	
	FinalFractionKachiL* fPtrC = new FinalFractionKachiL(2, 1); // Line 500
	
	cout << *fPtrC << endl; // display the information of the above object
	
	FinalFractionKachiL* fPtrD = new FinalFractionKachiL(9, 1); // Line 600
	
	cout << *fPtrD << endl; // display the information of the above object
	
	cout << "\nStarting at Line 1880:" << endl; // Line 1880
	
	cout << "Circle objects:" << endl;

	FinalCircleKachiL* cPtrA = new FinalCircleKachiL(*fPtrA); // Line 2000
	
	cout << *cPtrA << endl; // display the information of the above object
	
	FinalCircleKachiL* cPtrB = new FinalCircleKachiL(*fPtrB); // Line 2100
	
	cout << *cPtrB << endl; // display the information of the above object
	
	FinalCircleKachiL* cPtrC = new FinalCircleKachiL(*fPtrC); // Line 2200
	
	cout << *cPtrC << endl; // display the information of the above object
	
	cout << "\nStarting at Line 2680:" << endl; // Line 2680
	
	cout << "Cylinder objects:" << endl;

	FinalCylinderKachiL* cyPtrA = new FinalCylinderKachiL(*cPtrC, *fPtrC); // Line 3000
	
	cout << *cyPtrA << endl; // display the information of the above object
	
	FinalCylinderKachiL* cyPtrB = new FinalCylinderKachiL(*cPtrA, *fPtrA); // Line 3100
	
	cout << *cyPtrB << endl; // display the information of the above object
	
	FinalCylinderKachiL* cyPtrC = new FinalCylinderKachiL(*cPtrB, *fPtrB); // Line 3200 
	
	cout << *cyPtrC << endl; // display the information of the above object
	
	cout << "\nStarting at Line 3300:" << endl; // Line 3300
	
	cout << "Rectangle objects:" << endl;

	FinalRectangleKachiL* rPtrA = new FinalRectangleKachiL(*fPtrA, *fPtrA); // Line 3400
	
	cout << *rPtrA << endl; // display the information of the above object

	FinalRectangleKachiL* rPtrB = new FinalRectangleKachiL(*fPtrB, *fPtrB); // Line 3500

	cout << *rPtrB << endl;

	FinalRectangleKachiL* rPtrC = new FinalRectangleKachiL(*fPtrC, *fPtrC); // Line 3600
	
	cout << *rPtrC << endl;

	cout << "\nStarting at Line 3650:" << endl; // Line 3650

	cout << "Box objects:" << endl;

	FinalBoxKachiL* boxPtrA = new FinalBoxKachiL(*rPtrA, *fPtrD); // Line 3700

	cout << *boxPtrA << endl; // display the information of the above object

	FinalBoxKachiL* boxPtrB = new FinalBoxKachiL(*rPtrB, *fPtrD); // Line 3800

	cout << *boxPtrB << endl;

	FinalBoxKachiL* boxPtrC = new FinalBoxKachiL(*rPtrC, *fPtrD); // Line 3700

	cout << *boxPtrC << endl;

	int option; // Line 3800
	// Set up storage structures (for example, dynamic arrays) for
	FinalCircleKachiL c1 = *cPtrA;
	FinalCircleKachiL c2 = *cPtrB;
	FinalCircleKachiL c3 = *cPtrC;
	FinalCylinderKachiL cy1 = *cyPtrA;
	FinalCylinderKachiL cy2 = *cyPtrB;
	FinalCylinderKachiL cy3 = *cyPtrC;
	FinalRectangleKachiL r1 = *rPtrA;
	FinalRectangleKachiL r2 = *rPtrB;
	FinalRectangleKachiL r3 = *rPtrC;
	FinalBoxKachiL b1 = *boxPtrA;
	FinalBoxKachiL b2 = *boxPtrB;
	FinalBoxKachiL b3 = *boxPtrC;
	FinalFractionKachiL ptr1[12] = {c1.getArea(), c2.getArea(), c3.getArea(),
								r1.getArea(), r2.getArea(), r3.getArea(),
								cy1.getArea(), cy2.getArea(), cy3.getArea(),
								b1.getArea(), b2.getArea(), b3.getArea()};

	FinalFractionKachiL ptr2[12] = {c1.getVolume(), c2.getVolume(), c3.getVolume(),
								r1.getVolume(), r2.getVolume(), r3.getVolume(),
								cy1.getVolume(), cy2.getVolume(), cy3.getVolume(),
								b1.getVolume(), b2.getVolume(), b3.getVolume()};

	FinalFractionKachiL ptr3[3] = {c1.getArea(), c2.getArea(), c3.getArea()};

	FinalFractionKachiL ptr4[3] = {r1.getArea(), r2.getArea(), r3.getArea()};

	FinalFractionKachiL ptr5[3] = {cy1.getArea(), cy2.getArea(), cy3.getArea()};

	FinalFractionKachiL ptr6[3] = {b1.getArea(), b2.getArea(), b3.getArea()};


	// - All circles // Line 3900
	// - All cylinders // Line 4000
	// - All rectangles // Line 4100
	// - All boxes // Line 4200
	// These objects will be sent to the functions as a menu option
	// is selected
	do {
		printMenu();
		cout << "\nEnter the option: ";
		cin >> option;

		switch (option) {
			case 1:
				getLargestAreaKachiL(ptr1, 12);
				break;
			case 2:
				getLargestVolumeKachiL(ptr2, 12);
				break;
			case 3:
				displayAreaKachiL(ptr3, 3);
				break;
			case 4:
				displayAreaKachiL(ptr4, 3);
				break;
			case 5:
				displayVolumeKachiL(ptr5, 3);
				break;
			case 6:
				displayVolumeKachiL(ptr6, 3);
				break;
			case 7:
				displayVolumeKachiL(ptr2, 12);
				break;
			case 8:
			cout << "\nHave fun! \n"<< endl;
				break;
			default:
			// handle wrong option // Line 5100
				cout << "wrong option!" << endl;
				
		}
	
	} while (option != 8); // Line 5200

		// Set up code to handle the deletions of ALL // Line 5500
		// DYNAMIC COMPONENTS & OBJECTS
	return; // Line 10000
}


void printMenu() {
	cout << "\n**************************************************************"
	<< "\n*				MENU                         *"
	<< "\n* 1. Get & Display Largest Area (All Objects)                *"
	<< "\n* 2. Get & Display Largest volume (All Objects)              *"
	<< "\n* 3. Display Areas from Largest to Smallest (All Circles)    *"
	<< "\n* 4. Display Areas from Largest to Smallest (All Rectangles) *"
	<< "\n* 5. Display Volumes from Largest to Smallest (All Cylinders)*"
	<< "\n* 6. Display Volumes from Largest to Smallest (All Boxes)    *"
	<< "\n* 7. Display Volumes from Largest to Smallest (All Objects)  *"
	<< "\n* 8. Quit                                                    *"
	<< "\n**************************************************************" << endl;
	return;
}

void swap(FinalFractionKachiL& arg1, FinalFractionKachiL& arg2) {
	FinalFractionKachiL temp;
	
	temp = arg1;
	arg1 = arg2;
	arg2 = temp;
	return;
}

void getLargestAreaKachiL(FinalFractionKachiL ptr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		for(int j = i + 1; j < size; j++) {
			if(ptr[i] > ptr[j]) {
				swap(ptr[i], ptr[j]);
			}
		}
	}

	cout << "Smallest :" << ptr[0] << endl;
	return;
}

void getLargestVolumeKachiL(FinalFractionKachiL ptr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		for(int j = i + 1; j < size; j++) {
			if(ptr[i] > ptr[j]) {
				swap(ptr[i], ptr[j]);
			}
		}
	}

	cout << "Smallest :" << ptr[0] << endl;

	return;
}

void displayAreaKachiL(FinalFractionKachiL ptr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		for(int j = i + 1; j < size; j++) {
			if(ptr[i] > ptr[j]) {
				swap(ptr[i], ptr[j]);
			}
		}
	}

	cout << "Lowerest" << endl;
	for(int i = 0; i < size; i++) {
	cout << "  |   " << ptr[i] << endl;
	}
	cout << "  V   " << endl;
	cout << "Largest" << endl;
	return;
}

void displayVolumeKachiL(FinalFractionKachiL ptr[], int size) {
	for (int i = 0; i < size - 1; i++) {
		for(int j = i + 1; j < size; j++) {
			if(ptr[i] > ptr[j]) {
				swap(ptr[i], ptr[j]);
			}
		}
	}

	cout << "Lowerest" << endl;
	for(int i = 0; i < size; i++) {
	cout << "  |   " << ptr[i] << endl;
	}
	cout << "  V   " << endl;
	cout << "Largest" << endl;
	return;
}

/*OUTPUT
Starting at Line 50:
4
3
2
9

Starting at Line 1880:
Circle objects:
        Center : (0, 0)
        Radius : 4
        Area : 1256/25

        Center : (0, 0)
        Radius : 3
        Area : 1413/50

        Center : (0, 0)
        Radius : 2
        Area : 314/25


Starting at Line 2680:
Cylinder objects:
        Center : (0, 0)
        Radius : 1
        Heigth : 0
        Area : 157/25
        Volume : 0

        Center : (0, 0)
        Radius : 1
        Heigth : 0
        Area : 157/25
        Volume : 0

        Center : (0, 0)
        Radius : 1
        Heigth : 0
        Area : 157/25
        Volume : 0


Starting at Line 3300:
Rectangle objects:
        UpperLeft point : (0, 0)
        LowerRight point : (0, 0)
        Length : 4
        Width : 4
        Area : 16

        UpperLeft point : (0, 0)
        LowerRight point : (0, 0)
        Length : 3
        Width : 3
        Area : 9

        UpperLeft point : (0, 0)
        LowerRight point : (0, 0)
        Length : 2
        Width : 2
        Area : 4


Starting at Line 3650:
Box objects:
        Length : 1
        Width : 1
        Heigth : 0
        Area : 2
        Volume : 0

        Length : 1
        Width : 1
        Heigth : 0
        Area : 2
        Volume : 0

        Length : 1
        Width : 1
        Heigth : 0
        Area : 2
        Volume : 0


**************************************************************
*                               MENU                         *
* 1. Get & Display Largest Area (All Objects)                *
* 2. Get & Display Largest volume (All Objects)              *
* 3. Display Areas from Largest to Smallest (All Circles)    *
* 4. Display Areas from Largest to Smallest (All Rectangles) *
* 5. Display Volumes from Largest to Smallest (All Cylinders)*
* 6. Display Volumes from Largest to Smallest (All Boxes)    *
* 7. Display Volumes from Largest to Smallest (All Objects)  *
* 8. Quit                                                    *
**************************************************************

Enter the option: 1
Smallest :2

**************************************************************
*                               MENU                         *
* 1. Get & Display Largest Area (All Objects)                *
* 2. Get & Display Largest volume (All Objects)              *
* 3. Display Areas from Largest to Smallest (All Circles)    *
* 4. Display Areas from Largest to Smallest (All Rectangles) *
* 5. Display Volumes from Largest to Smallest (All Cylinders)*
* 6. Display Volumes from Largest to Smallest (All Boxes)    *
* 7. Display Volumes from Largest to Smallest (All Objects)  *
* 8. Quit                                                    *
**************************************************************

Enter the option: 2
Smallest :0

**************************************************************
*                               MENU                         *
* 1. Get & Display Largest Area (All Objects)                *
* 2. Get & Display Largest volume (All Objects)              *
* 3. Display Areas from Largest to Smallest (All Circles)    *
* 4. Display Areas from Largest to Smallest (All Rectangles) *
* 5. Display Volumes from Largest to Smallest (All Cylinders)*
* 6. Display Volumes from Largest to Smallest (All Boxes)    *
* 7. Display Volumes from Largest to Smallest (All Objects)  *
* 8. Quit                                                    *
**************************************************************

Enter the option: 3
Lowerest
  |   314/25
  |   1413/50
  |   1256/25
  V
Largest

**************************************************************
*                               MENU                         *
* 1. Get & Display Largest Area (All Objects)                *
* 2. Get & Display Largest volume (All Objects)              *
* 3. Display Areas from Largest to Smallest (All Circles)    *
* 4. Display Areas from Largest to Smallest (All Rectangles) *
* 5. Display Volumes from Largest to Smallest (All Cylinders)*
* 6. Display Volumes from Largest to Smallest (All Boxes)    *
* 7. Display Volumes from Largest to Smallest (All Objects)  *
* 8. Quit                                                    *
**************************************************************

Enter the option: 4
Lowerest
  |   4
  |   9
  |   16
  V
Largest

**************************************************************
*                               MENU                         *
* 1. Get & Display Largest Area (All Objects)                *
* 2. Get & Display Largest volume (All Objects)              *
* 3. Display Areas from Largest to Smallest (All Circles)    *
* 4. Display Areas from Largest to Smallest (All Rectangles) *
* 5. Display Volumes from Largest to Smallest (All Cylinders)*
* 6. Display Volumes from Largest to Smallest (All Boxes)    *
* 7. Display Volumes from Largest to Smallest (All Objects)  *
* 8. Quit                                                    *
**************************************************************

Enter the option: 5
Lowerest
  |   157/25
  |   157/25
  |   157/25
  V
Largest

**************************************************************
*                               MENU                         *
* 1. Get & Display Largest Area (All Objects)                *
* 2. Get & Display Largest volume (All Objects)              *
* 3. Display Areas from Largest to Smallest (All Circles)    *
* 4. Display Areas from Largest to Smallest (All Rectangles) *
* 5. Display Volumes from Largest to Smallest (All Cylinders)*
* 6. Display Volumes from Largest to Smallest (All Boxes)    *
* 7. Display Volumes from Largest to Smallest (All Objects)  *
* 8. Quit                                                    *
**************************************************************

Enter the option: 6
Lowerest
  |   2
  |   2
  |   2
  V
Largest

**************************************************************
*                               MENU                         *
* 1. Get & Display Largest Area (All Objects)                *
* 2. Get & Display Largest volume (All Objects)              *
* 3. Display Areas from Largest to Smallest (All Circles)    *
* 4. Display Areas from Largest to Smallest (All Rectangles) *
* 5. Display Volumes from Largest to Smallest (All Cylinders)*
* 6. Display Volumes from Largest to Smallest (All Boxes)    *
* 7. Display Volumes from Largest to Smallest (All Objects)  *
* 8. Quit                                                    *
**************************************************************

Enter the option: 7
Lowerest
  |   0
  |   0
  |   0
  |   0
  |   0
  |   0
  |   0
  |   0
  |   0
  |   0
  |   0
  |   0
  V
Largest

**************************************************************
*                               MENU                         *
* 1. Get & Display Largest Area (All Objects)                *
* 2. Get & Display Largest volume (All Objects)              *
* 3. Display Areas from Largest to Smallest (All Circles)    *
* 4. Display Areas from Largest to Smallest (All Rectangles) *
* 5. Display Volumes from Largest to Smallest (All Cylinders)*
* 6. Display Volumes from Largest to Smallest (All Boxes)    *
* 7. Display Volumes from Largest to Smallest (All Objects)  *
* 8. Quit                                                    *
**************************************************************

Enter the option: 8

Have fun!
*/
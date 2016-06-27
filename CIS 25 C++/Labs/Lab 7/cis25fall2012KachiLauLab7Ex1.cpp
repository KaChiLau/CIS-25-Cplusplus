/**
*Program Name: cisFall2012kachilauLab7Ex1.cpp
*Discussion:   Lab#5 Ex1
*author:       KaChiLau
*Date:         12/04/2012
*/

#include "FractionKachiL.h"
#include "pointKachiL.h"
#include "RectangleKachiL.h"
#include "BoxKachiL.h"
#include "CircleKachiL.h"
#include "CylinderKachiL.h"
//#include "Menu.h"

#include <iostream>
using namespace std;

int main() {

	displayinfo();

	RectangleKachiL rec1;
	RectangleKachiL rec2;
	BoxKachiL b3;
	BoxKachiL b4;
	CircleKachiL c5;
	CircleKachiL c6;
	CylinderKachiL cy7;
	CylinderKachiL cy8;
	int option;
	int ok = 0;
	int k = 0;

	do {
		cout << "\n****************************************" 
			 << "\n*                 Menu                 *"
			 << "\n*                                      *"
			 << "\n* 1. Create 2 RectangleKachiL objects  *"
			 << "\n* 2. Create 2 CircleKachiL objects     *"
			 << "\n* 3. Create 2 BoxKachiL objects        *"
			 << "\n* 4. Create 2 CylinderKachiL objects   *"
			 << "\n* 5. Compare 2 seleced object by area  *"
			 << "\n* 6. Compare 2 seleced object by volume*"
			 << "\n* 7. print                             *"
			 << "\n* 8. Quit                              *"
			 << "\n****************************************"<< endl;

			 cout << "Select an option (use integer value only): ";
			 cin >> option;  

			 switch(option) {
		case 1:
			ok = 1;
			k = 1;
			cin >> rec1;
			cin >> rec2;
			break;

		case 2:
			ok = 1;
			k = 2;
			cin >> c5;
			cin >> c6;
			break;

		case 3:
			ok = 1;
			k = 3;
			cin >> rec1;
			cin >> b3;
			cin >> rec2;
			cin >> b4;
			break;

		case 4:
			ok = 1;
			k = 4;
			cin >> c5;
			cin >> cy7;
			cin >> c6;
			cin >> cy8;
			break;
		case 5:
			//Area
			if(ok == 1) {
				if(k == 1) {
					if (rec1.getArea() > rec2.getArea()) {
						cout << "\nThe 1st Rectangle is bigger than 2nd Rectangle !\n" << endl;
					} else if (rec1.getArea() < rec2.getArea()) { 
						cout << "\nThe 2nd Rectangle is bigger than 1st Rectangle !\n" << endl;
					} else {
						cout << "\nboth Rectangles are equal!\n"  << endl;
					}	
				} else if (k == 2) {

					if (c5.getArea() > c6.getArea()) {
						cout << "\nThe 1st Circle is bigger than 2nd Rectangle !\n" << endl;
					} else if (c5.getArea() < c6.getArea()) { 
						cout << "\nThe 2nd Circle is bigger than 1st Rectangle !\n" << endl;
					} else {
						cout << "\nboth Circles are equal!\n"  << endl;
					}	

				} else if (k == 3) {
					if (rec1.getArea() * b3.getheight() >
						rec2.getArea() * b4.getheight()) {
		
							cout << "\nThe 1st Box is bigger than 2nd Rectangle !\n" << endl;

						} else if (rec1.getArea() * b3.getheight() <
						rec2.getArea() * b4.getheight()) { 

							cout << "\nThe 2nd Box is bigger than 1st Rectangle !\n" << endl;
						} else {
							cout << "\nboth Boxes are equal!\n"  << "\n" << endl;
						}
				} else if (k == 4) {
					if (c5.getArea() * cy7.getheight() >
						c6.getArea() * cy8.getheight()) {
		
							cout << "\nThe 1st Cylinder is bigger than 2nd Rectangle !\n" << endl;

						} else if (c5.getArea() * cy7.getheight() <
						c6.getArea() * cy8.getheight()) { 

							cout << "\nThe 2nd Cylinder is bigger than 1st Rectangle !\n" << endl;
						} else {
							cout << "\nboth Cylinders are equal!\n"  << "\n" << endl;
						}	
				}

				} else { 

					cout << "\nNot a proper call as no Fractions are available!" << endl;
			}
			break;

		case 6:
			//Volume
			if(ok == 1) {
				if(k == 1) {
					if (rec1.getVolume() > rec2.getVolume()) {
						cout << "\nThe 1st Rectangle is bigger than 2nd Rectangle !\n" << endl;
					} else if (rec1.getVolume() < rec2.getVolume()) { 
						cout << "\nThe 2nd Rectangle is bigger than 1st Rectangle !\n" << endl;
					} else {
						cout << "\nboth Rectangles are equal!\n"  << endl;
					}	
				} else if (k == 2) {

					if (c5.getVolume() > c6.getVolume()) {
						cout << "\nThe 1st Circle is bigger than 2nd Rectangle !\n" << endl;
					} else if (c5.getVolume() < c6.getVolume()) { 
						cout << "\nThe 2nd Circle is bigger than 1st Rectangle !\n" << endl;
					} else {
						cout << "\nboth Circles are equal!\n"  << endl;
					}	

				} else if (k == 3) {
					if (rec1.getArea() * b3.getheight() >
						rec2.getArea() * b4.getheight()) {
		
							cout << "\nThe 1st Box is bigger than 2nd Rectangle !\n" << endl;

						} else if (rec1.getArea() * b3.getheight() <
						rec2.getArea() * b4.getheight()) { 

							cout << "\nThe 2nd Box is bigger than 1st Rectangle !\n" << endl;
						} else {
							cout << "\nboth Boxes are equal!\n"  << "\n" << endl;
						}
				} else if (k == 4) {
					if (c5.getArea() * cy7.getheight() >
						c6.getArea() * cy8.getheight()) {
		
							cout << "\nThe 1st Cylinder is bigger than 2nd Rectangle !\n" << endl;

						} else if (c5.getArea() * cy7.getheight() <
						c6.getArea() * cy8.getheight()) { 

							cout << "\nThe 2nd Cylinder is bigger than 1st Rectangle !\n" << endl;
						} else {
							cout << "\nboth Cylinders are equal!\n"  << "\n" << endl;
						}
				}
				} else { 

					cout << "\nNot a proper call as no Fractions are available!" << endl;
			}
			break;

		case 7:
			if(ok == 1) {

				} else { 

					cout << "\nNot a proper call as no Fractions are available!" << endl;
			}
			break;

		case 8:
			cout << "\nHaving fun! \n" << endl;
			break;

		default:
			cout << "Wrong option!" << endl;
			 }
		} while (option != 8);

	return 0;
}



/*OUTPUT

For Y:
Num: -2
Denom: 1

****************************************
*                 Menu                 *
*                                      *
* 1. Create 2 RectangleKachiL objects  *
* 2. Create 2 CircleKachiL objects     *
* 3. Create 2 BoxKachiL objects        *
* 4. Create 2 CylinderKachiL objects   *
* 5. Compare 2 seleced object by area  *
* 6. Compare 2 seleced object by volume*
* 7. Quit                              *
****************************************
Select an option (use integer value only): 5

The 2nd Rectangle is bigger than 1st Rectangle !


****************************************
*                 Menu                 *
*                                      *
* 1. Create 2 RectangleKachiL objects  *
* 2. Create 2 CircleKachiL objects     *
* 3. Create 2 BoxKachiL objects        *
* 4. Create 2 CylinderKachiL objects   *
* 5. Compare 2 seleced object by area  *
* 6. Compare 2 seleced object by volume*
* 7. Quit                              *
****************************************
Select an option (use integer value only): 6
They both have to volume
They both have to volume
They both have to volume
They both have to volume

both Rectangles are equal!


****************************************
*                 Menu                 *
*                                      *
* 1. Create 2 RectangleKachiL objects  *
* 2. Create 2 CircleKachiL objects     *
* 3. Create 2 BoxKachiL objects        *
* 4. Create 2 CylinderKachiL objects   *
* 5. Compare 2 seleced object by area  *
* 6. Compare 2 seleced object by volume*
* 7. Quit                              *
****************************************
Select an option (use integer value only): 2

---center---

For X:
Num: 2
Denom: 4

For Y:
Num: 2
Denom: 1

---radius---
Num: 4
Denom: 1

---center---

For X:
Num: -1
Denom: 1

For Y:
Num: -1
Denom: 2

---radius---
Num: 2
Denom: 1

****************************************
*                 Menu                 *
*                                      *
* 1. Create 2 RectangleKachiL objects  *
* 2. Create 2 CircleKachiL objects     *
* 3. Create 2 BoxKachiL objects        *
* 4. Create 2 CylinderKachiL objects   *
* 5. Compare 2 seleced object by area  *
* 6. Compare 2 seleced object by volume*
* 7. Quit                              *
****************************************
Select an option (use integer value only): 5

The 1st Circle is bigger than 2nd Rectangle !


****************************************
*                 Menu                 *
*                                      *
* 1. Create 2 RectangleKachiL objects  *
* 2. Create 2 CircleKachiL objects     *
* 3. Create 2 BoxKachiL objects        *
* 4. Create 2 CylinderKachiL objects   *
* 5. Compare 2 seleced object by area  *
* 6. Compare 2 seleced object by volume*
* 7. Quit                              *
****************************************
Select an option (use integer value only): 6
They both have to volume
They both have to volume
They both have to volume
They both have to volume

both Circles are equal!


****************************************
*                 Menu                 *
*                                      *
* 1. Create 2 RectangleKachiL objects  *
* 2. Create 2 CircleKachiL objects     *
* 3. Create 2 BoxKachiL objects        *
* 4. Create 2 CylinderKachiL objects   *
* 5. Compare 2 seleced object by area  *
* 6. Compare 2 seleced object by volume*
* 7. Quit                              *
****************************************
Select an option (use integer value only): 3

---upperleft---

For X:
Num: 2
Denom: 4

For Y:
Num: 2
Denom: 1

---lowerright---

For X:
Num: 4
Denom: 1

For Y:
Num: 1
Denom: 1
height: Num: 5
Denom: 1

---upperleft---

For X:
Num: -1
Denom: 1

For Y:
Num: -1
Denom: 2

---lowerright---

For X:
Num: 2
Denom: 1

For Y:
Num: -2
Denom: 1
height: Num: 6
Denom: 1

****************************************
*                 Menu                 *
*                                      *
* 1. Create 2 RectangleKachiL objects  *
* 2. Create 2 CircleKachiL objects     *
* 3. Create 2 BoxKachiL objects        *
* 4. Create 2 CylinderKachiL objects   *
* 5. Compare 2 seleced object by area  *
* 6. Compare 2 seleced object by volume*
* 7. Quit                              *
****************************************
Select an option (use integer value only): 5

The 2nd Box is bigger than 1st Rectangle !


****************************************
*                 Menu                 *
*                                      *
* 1. Create 2 RectangleKachiL objects  *
* 2. Create 2 CircleKachiL objects     *
* 3. Create 2 BoxKachiL objects        *
* 4. Create 2 CylinderKachiL objects   *
* 5. Compare 2 seleced object by area  *
* 6. Compare 2 seleced object by volume*
* 7. Quit                              *
****************************************
Select an option (use integer value only): 6

The 2nd Box is bigger than 1st Rectangle !


****************************************
*                 Menu                 *
*                                      *
* 1. Create 2 RectangleKachiL objects  *
* 2. Create 2 CircleKachiL objects     *
* 3. Create 2 BoxKachiL objects        *
* 4. Create 2 CylinderKachiL objects   *
* 5. Compare 2 seleced object by area  *
* 6. Compare 2 seleced object by volume*
* 7. Quit                              *
****************************************
Select an option (use integer value only): 4

---center---

For X:
Num: 2
Denom: 4

For Y:
Num: 2
Denom: 1

---radius---
Num: 4
Denom: 1
height: Num: 1
Denom: 1

---center---

For X:
Num: -1
Denom: 1

For Y:
Num: -1
Denom: 2

---radius---
Num: 2
Denom: 1
height: Num: -2
Denom: 1

****************************************
*                 Menu                 *
*                                      *
* 1. Create 2 RectangleKachiL objects  *
* 2. Create 2 CircleKachiL objects     *
* 3. Create 2 BoxKachiL objects        *
* 4. Create 2 CylinderKachiL objects   *
* 5. Compare 2 seleced object by area  *
* 6. Compare 2 seleced object by volume*
* 7. Quit                              *
****************************************
Select an option (use integer value only): 5

The 1st Cylinder is bigger than 2nd Rectangle !


****************************************
*                 Menu                 *
*                                      *
* 1. Create 2 RectangleKachiL objects  *
* 2. Create 2 CircleKachiL objects     *
* 3. Create 2 BoxKachiL objects        *
* 4. Create 2 CylinderKachiL objects   *
* 5. Compare 2 seleced object by area  *
* 6. Compare 2 seleced object by volume*
* 7. Quit                              *
****************************************
Select an option (use integer value only): 6

The 1st Cylinder is bigger than 2nd Rectangle !


****************************************
*                 Menu                 *
*                                      *
* 1. Create 2 RectangleKachiL objects  *
* 2. Create 2 CircleKachiL objects     *
* 3. Create 2 BoxKachiL objects        *
* 4. Create 2 CylinderKachiL objects   *
* 5. Compare 2 seleced object by area  *
* 6. Compare 2 seleced object by volume*
* 7. Quit                              *
****************************************
Select an option (use integer value only): 7

Having fun!

Press any key to continue . . .
*/
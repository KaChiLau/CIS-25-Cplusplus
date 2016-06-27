/**
*Program Name: cisFall2012kachilauLab6Ex1.cpp
*Discussion:   Lab#5 Ex1
*author:       KaChiLau
*Date:         12/04/2012
*/

#include "FractionKachiL.h"
#include "pointKachiL.h"
#include "RectangleKachiL.h"
//#include "Menu.h"

#include <iostream>
using namespace std;

int main() {

	RectangleKachiL rec1;
	RectangleKachiL rec2;
	int option;
	int ok = 0;

	do {
		cout << "\n************************************" 
			 << "\n*              Menu                *"
			 << "\n*                                  *"
			 << "\n* (1) Create two Rectangle object   *"
			 << "\n* (2) Compare by volume             *"
			 << "\n* (3) Compare by area               *"
			 << "\n* (4) Print two Rectangle           *"
			 << "\n* (5) Quit                          *"
			 << "\n************************************"<< endl;

			 cout << "Enter your option (between 1 through 5): ";
			 cin >> option;  

			 switch(option) {
		case 1:
			cin >> rec1;
			cin >> rec2;
			ok = 1;
	
			break;

		case 2:

			if(ok == 1) {

				if (rec1.getVolume() > rec2.getVolume()) {
		
					cout << "\nThe 1st Rectangle is bigger than 2nd Rectangle !\n" << endl;

				} else if (rec1.getVolume() < rec2.getVolume()) { 

					cout << "\nThe 2nd Rectangle is bigger than 1st Rectangle !\n" << endl;
				} else {
					cout << "\nboth Rectangles are equal!\n"  << endl;
				}

			} else { 

					cout << "\nNot a proper call as no Fractions are available!" << endl;
			}
			break;

		case 3:

			if(ok == 1) {

				if (rec1.getArea() > rec2.getArea()) {
		
					cout << "\nThe 1st Rectangle is bigger than 2nd Rectangle !\n" << endl;

				} else if (rec1.getArea() < rec2.getArea()) { 

					cout << "\nThe 2nd Rectangle is bigger than 1st Rectangle !\n" << endl;
				} else {
					cout << "\nboth Rectangles are equal!\n"  << endl;
				}

			
			} else { 

					cout << "\nNot a proper call as no Fractions are available!" << endl;
			}
			break;

		case 4:
			
			if(ok == 1) {
				cout << "\n1st Rectangle: \n";
				rec1.print();
				cout << "\n2nd Rectangle: \n";
				rec2.print();
				
			} else { 
				cout << "\nNot a proper call as no Fractions are available!" << endl;
			}
				
			break;

		case 5:
			cout << "\nHaving Fun...!\n" << endl;
			break;

		default:
			cout << "Wrong option!" << endl;
		}
	
	} while (option != 5);

	return 0;
}
/*OUTPUT

************************************
*              Menu                *
*                                  *
* (1) Create two Rectangle object   *
* (2) Compare by volume             *
* (3) Compare by area               *
* (4) Print two Rectangle           *
* (5) Quit                          *
************************************
Enter your option (between 1 through 5): 1

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

************************************
*              Menu                *
*                                  *
* (1) Create two Rectangle object   *
* (2) Compare by volume             *
* (3) Compare by area               *
* (4) Print two Rectangle           *
* (5) Quit                          *
************************************
Enter your option (between 1 through 5): 2
Rectangles have to volume
Rectangles have to volume
Rectangles have to volume
Rectangles have to volume

both Rectangles are equal!


************************************
*              Menu                *
*                                  *
* (1) Create two Rectangle object   *
* (2) Compare by volume             *
* (3) Compare by area               *
* (4) Print two Rectangle           *
* (5) Quit                          *
************************************
Enter your option (between 1 through 5): 3

The 2nd Rectangle is bigger than 1st Rectangle !


************************************
*              Menu                *
*                                  *
* (1) Create two Rectangle object   *
* (2) Compare by volume             *
* (3) Compare by area               *
* (4) Print two Rectangle           *
* (5) Quit                          *
************************************
Enter your option (between 1 through 5): 4

1st Rectangle:
The rectangle information is --
        UpperLeft point :
        X:
        Num: 2
        Denom: 4

        Y:
        Num: 2
        Denom: 1


        LowerRight point :
        X:
        Num: 4
        Denom: 1

        Y:
        Num: 1
        Denom: 1


        Length :
        Num: 0
        Denom: 1

        Width :
        Num: 0
        Denom: 1


2nd Rectangle:
The rectangle information is --
        UpperLeft point :
        X:
        Num: -1
        Denom: 1

        Y:
        Num: -1
        Denom: 2


        LowerRight point :
        X:
        Num: 2
        Denom: 1

        Y:
        Num: -2
        Denom: 1


        Length :
        Num: 1
        Denom: 1

        Width :
        Num: 1
        Denom: 1


************************************
*              Menu                *
*                                  *
* (1) Create two Rectangle object   *
* (2) Compare by volume             *
* (3) Compare by area               *
* (4) Print two Rectangle           *
* (5) Quit                          *
************************************
Enter your option (between 1 through 5): 5

Having Fun...!

Press any key to continue . . .
*/

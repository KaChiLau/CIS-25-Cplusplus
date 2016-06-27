/**
 *Program Name: Menu.cpp
 *Discussion:   Class Fraction
 */

#include <iostream>
//#include "FractionKachiL.h"
#include "Menu.h"
using namespace std;

void Menu::mainmenu() {

	int option;

	do {
		cout << "\n*********************" 
			 << "\n*       Menu        *"
			 << "\n*                   *"
			 << "\n* 1. Initializing   *"
			 << "\n* 2. Adding         *"
			 << "\n* 3. Subtracting    *"
			 << "\n* 4. Multiplying    *"
			 << "\n* 5. Dividing       *"
			 << "\n* 6. Printing       *"
			 << "\n* 7. Quit           *"
			 << "\n*********************"<< endl;

			 cout << "Select an option (use integer value only): ";
			 cin >> option;  

			 switch(option) {
		case 1:
			initializingMenu();
			break;

		case 2:
			addingMenu();
			break;

		case 3:
			subtractingMenu();
			break;

		case 4:
			multiplyingMenu();
			break;

		case 5:
			dividingMenu();
			break;

		case 6:
			printingMenu();
			break;

		case 7:
			cout << "\nHaving Fun...!\n" << endl;
			break;

		default:
			cout << "Wrong option!" << endl;
		}
	
	} while (option != 7);

	return;
}

void Menu::initializingMenu() {

	int option;

	ok = 0;

	do {
		cout << "\n********************************" 
			 << "\n*      INITIALIZING MENU       *"
			 << "\n*                              *"
			 << "\n* 1. init() - Stand Alone      *"
			 << "\n* 2. operator= () - Member     *"
			 << "\n* 3. Return to Previous Menu   *"
			 << "\n********************************"<< endl;

			 cout << "Select an option (1, 2, or 3): ";
			 cin >> option;  

			 switch(option) {
		case 1:
			cout << "\nCalling init() - Stand Alone...\n" << endl;
			a = init();
			b = init();
			ok = 1;
			break;

		case 2:
			cout << "\nCalling operator=() - Member...\n" << endl;
			a = init();
			b = init();
			c = (a,b);
			ok = 1;
			break;

		case 3:
			cout <<"\nReturn to previous MENU" << endl;
			break;

		default:
			cout << "\nWrong option!" << endl;
		}

} while (option != 3);

	return;
}

void Menu::addingMenu() {

	int option;

	if(ok == 1) {

		do {
			cout << "\n********************************" 
				 << "\n*         ADDING MENU          *"
				 << "\n*                              *"
				 << "\n* 1. add() - Member            *"
				 << "\n* 2. add() - Stand Alone       *"
				 << "\n* 3. operator+ () - Member     *"
				 << "\n* 4. Return to Previous Menu   *"
				 << "\n********************************"<< endl;

				 cout << "Select an option (1, 2, 3 or 4): ";
				 cin >> option;  

				 switch(option) {
			case 1:
				cout << "\nCalling add() - member...\n" << endl;
				c.add(a,b);
				break;

			case 2:
				cout << "\nCalling add() - Stand Alone...\n" << endl;
				c = add(a,b);
				break;

			case 3:
				cout << "\nCalling operator+() - member...\n" << endl;
				c = a + b;
				break;

			case 4:
				cout <<"\nReturn to previous MENU" << endl;
				break;

			default:
				cout << "\nWrong option!" << endl;
			}
		
		} while (option != 4);

	} else { 
		cout << "\nNot a proper call as no Fractions are available!" << endl;
	}

		return;
	}

void Menu::subtractingMenu() {

	int option;

	if(ok == 1) {

		do {
			cout << "\n********************************" 
				 << "\n*       SUBTRACTING MENU       *"
				 << "\n*                              *"
				 << "\n* 1. subtract() - Member       *"
				 << "\n* 2. subtract() - Stand Alone  *"
				 << "\n* 3. operator- () - Member     *"
				 << "\n* 4. Return to Previous Menu   *"
				 << "\n********************************"<< endl;

				 cout << "Select an option (1, 2, 3 or 4): ";
				 cin >> option;  

				 switch(option) {
			case 1:
				cout << "\nCalling subtract() - member..\n." << endl;
				c.subtract(a,b);
				break;

			case 2:
				cout << "\nCalling subtract() - Stand Alone...\n" << endl;
				c = subtract(a,b);
				break;

			case 3:
				cout << "\nCalling operator-() - member...\n" << endl;
				c = a - b;
				break;

			case 4:
				cout <<"\nReturn to previous MENU" << endl;
				break;

			default:
				cout << "\nWrong option!" << endl;
			}
	
		} while (option != 4);
	
	} else { 
		cout << "\nNot a proper call as no Fractions are available!" << endl;
	}

	return;
}

void Menu::multiplyingMenu() {

	int option;
	
	if(ok == 1) {

		do {
			cout << "\n*********************************" 
				 << "\n*       MULTIPLYING MENU        *"
				 << "\n*                               *"
				 << "\n* 1. multiplying() - Member     *"
				 << "\n* 2. multiplying() - Stand Alone*"
				 << "\n* 3. operator* () - Member      *"
				 << "\n* 4. Return to Previous Menu    *"
				 << "\n*********************************"<< endl;

				 cout << "Select an option (1, 2, 3 or 4): ";
				 cin >> option;  

				 switch(option) {
			case 1:
				cout << "\nCalling multiplying() - member...\n" << endl;
				c.multiply(a,b);
				break;

			case 2:
				cout << "\nCalling multiplying() - Stand Alone...\n" << endl;
				c = multiply(a,b);
				break;

			case 3:
				cout << "\nCalling operator*() - member...\n" << endl;
				c = a * b;
				break;

			case 4:
				cout <<"\nReturn to previous MENU" << endl;
				break;

			default:
				cout << "\nWrong option!" << endl;
			}

		} while (option != 4);
	
	} else { 
		cout << "\nNot a proper call as no Fractions are available!" << endl;
	}

	return;
}

void Menu::dividingMenu() {

	int option;

	if(ok == 1) {
		
		do {
			cout << "\n********************************" 
				 << "\n*        DIVIDING MENU         *"
				 << "\n*                              *"
				 << "\n* 1. dividing() - Member       *"
				 << "\n* 2. dividing() - Stand Alone  *"
				 << "\n* 3. operator/ () - Member     *"
				 << "\n* 4. Return to Previous Menu   *"
				 << "\n********************************"<< endl;

				 cout << "Select an option (1, 2, 3 or 4): ";
				 cin >> option;  

				 switch(option) {
			case 1:
				cout << "\nCalling divide() - member...\n" << endl;
				c.divide(a,b);
				break;

			case 2:
				cout << "\nCalling divide() - Stand Alone...\n" << endl;
				c = divide(a,b);
				break;

			case 3:
				cout << "\nCalling operator/() - member...\n" << endl;
				c = a / b;
				break;

			case 4:
				cout <<"\nReturn to previous MENU" << endl;
				break;

			default:
				cout << "\nWrong option!" << endl;
			}

		} while (option != 4);
	
	} else { 
		cout << "\nNot a proper call as no Fractions are available!" << endl;
	}

	return;
}

void Menu::printingMenu() {

	int option;
	
	if(ok == 1) {

		do {
			cout << "\n********************************" 
				 << "\n*        PRINTING MENU         *"
				 << "\n*                              *"
				 << "\n* 1. print() - Member          *"
				 << "\n* 2. print () - StandAlone     *"
				 << "\n* 3. Return to Previous Menu   *"
				 << "\n********************************"<< endl;

				 cout << "Select an option (1, 2, or 3): ";
				 cin >> option;  

				 switch(option) {
			case 1:
				cout << "\nCalling print() - member...\n" << endl;
				c.print();
				break;

			case 2:
				cout << "\nCalling print() - Stand Alone...\n" << endl;
				print(c);
				break;

			case 3:
				cout <<"\nReturn to previous MENU" << endl;
				break;

			default:
				cout << "\nWrong option!" << endl;
			}

		} while (option != 3);
		
	} else { 
		cout << "\nNot a proper call as no Fractions are available!" << endl;
	}
	return;
}
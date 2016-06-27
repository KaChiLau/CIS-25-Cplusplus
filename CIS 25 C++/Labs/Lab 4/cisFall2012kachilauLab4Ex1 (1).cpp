/**
*Program Name: cisFall2012kachilauLab4Ex1.cpp
*Discussion:   Lab#4 Ex1
*author:       KaChiLau
*Date:         10/11/2012
*/

#include <iostream>
using namespace std;


class FractionKachiL {
private:
	int num;	//member data
	int denom;
	
public:
	FractionKachiL() { //Default Constructor
		int num = 0;
		int denom = 1;
	}

	FractionKachiL(const FractionKachiL& ref) { //Copy Constructor
		num = ref.num;
		denom = ref.denom;
	}

	FractionKachiL(int arg) {  //Convert Constructor
		num = arg;
		if (arg){
			denom = arg;
		}
		else {
			denom = 1;
		}	
	}

	FractionKachiL( int arg, int arg2 ){
		num = arg;
		if (arg2 == 0)
			denom = 1;
		else 
			denom = arg2;
	}

	~FractionKachiL() {     //destructor
	}

	void setnum(int arg) {
		num = arg;
		return;
	}

	void setdenom(int arg) {
		if(arg) {
			denom = arg;
		} else {
			denom = 1;
			}
		return;
	}

	int getnum() const {
		return num;
	}

	int getdenom() const {
		return denom;
	}

	FractionKachiL add(FractionKachiL arg){  
		
		FractionKachiL temp;
		temp.num = (num * arg.denom) + (denom * arg.num);
		temp.denom = denom * arg.denom;
		return temp;
	}


	FractionKachiL subtract(FractionKachiL arg) {  

		FractionKachiL temp;
		temp.num = (num * arg.denom) - (denom * arg.num);
		temp.denom = denom * arg.denom;
		return temp;
	}

	FractionKachiL multiply(FractionKachiL arg) {   

		FractionKachiL temp;
		temp.num = num * arg.num;
		temp.denom = denom * arg.denom;
		return temp;
	}

	FractionKachiL divide(FractionKachiL arg) {   

		FractionKachiL temp;
		temp.num = num * arg.denom;
		temp.denom = denom * arg.denom;
		if ( temp.denom < 0 ) {
			temp.denom = -temp.denom;
			temp.num = -temp.num;
		}
		return temp;
	}

	void print() {    
		cout << "\n\tNumerator: " << num << " \n\tDenominator  " << denom << endl; 
		return;
	}
};

void displayinfo(void);
void menu(void);

int main() {

	displayinfo();

	menu();

	return 0;
}

void displayinfo() {

	cout << "Class information --" << "\n";
	
	cout << "  CIS 25 C ++ Programming" << "\n";
	
	cout << "  Laney College\n" << "\n";
	
	cout << "Assignment Information --" << "\n";

	cout << "  Assignment Number:  Lab 04 Exercise #1" << "\n";
	
	cout << "  Written by:		   KaChiLau" << "\n";
	
	cout << "  Due Date:		   October 11, 2012\n" << "\n";

	return;

	return;
}

void menu() {

	int num1;
	int denom1;
	int num2;
	int denom2;
	int option;

	FractionKachiL temp;

	cout << "Enter your 1st fraction- \n"
		<< "Enter the Numerator: ";
	cin >> num1;
	cout << "Enter the Denominator: ";
	cin >> denom1;

	cout << "Enter your 2nd fraction- \n"
		<< "Enter the Numerator: ";
	cin >> num2;
	cout << "Enter the Denominator: ";
	cin >> denom2;

	FractionKachiL frac1(num1, denom1); //access FractionKachiL
	FractionKachiL frac2(num2, denom2);
	FractionKachiL frac3;

	do {
		cout << "\n*******************************" 
			 << "\n*           Menu              *"
			 << "\n* 1. Calling add()            *"
			 << "\n* 2. Calling subtract()       *"
			 << "\n* 3. Calling multiple()       *"
			 << "\n* 4. Calling divide()         *"
			 << "\n* 5. Calling print()          *"
			 << "\n* 6. Quit                     *"
			 << "\n*******************************"<< endl;

			 cout << "Select an option: ";
			 cin >> option;        

			 switch (option) {
				 case 1:           
                     cout << "\nCalling add() --" <<endl;
					 frac3 = frac1.add(frac2);         // Add
					 frac3.print();
					 break;

				 case 2:           
                     cout << "\nCalling subtract() --" <<endl; //Subtract
					 frac3 = frac1.subtract(frac2);    
					 frac3.print();
					 break;

				 case 3:            
                     cout << "\nCalling multiply() --" <<endl; //Mulitply
					 frac3 = frac1.multiply(frac2);  
					 frac3.print();        
					 break;

				 case 4:             
                     cout << "\nCalling divide() --" <<endl; //Division
					 frac3 = frac1.divide(frac2);     
					 frac3.print();  
					 break;
					 
				 case 5:             
					 cout << "\nCalling print() --" <<endl; //Print
					 frac1.print();  
					 frac2.print();  
					 break;

				 case 6:
					 cout <<"\nHaving Fun" << endl; //Quit
					 break;

				 default:            
					 cout <<"\n\tWrong Option!....." <<endl;
			 }
		 } while ( option != 6 );

	return;
}

/*OUTPUT

Class information --
  CIS 25 C ++ Programming
  Laney College

Assignment Information --
  Assignment Number:  Lab 04 Exercise #1
  Written by:              KaChiLau
  Due Date:                October 11, 2012

Enter your 1st fraction-
Enter the Numerator: 2
Enter the Denominator: 3
Enter your 2nd fraction-
Enter the Numerator: 4
Enter the Denominator: 5

*******************************
*           Menu              *
* 1. Calling add()            *
* 2. Calling subtract()       *
* 3. Calling multiple()       *
* 4. Calling divide()         *
* 5. Calling print()          *
* 6. Quit                     *
*******************************
Select an option: 5

Calling print() --

        Numerator: 2
        Denominator  3

        Numerator: 4
        Denominator  5

*******************************
*           Menu              *
* 1. Calling add()            *
* 2. Calling subtract()       *
* 3. Calling multiple()       *
* 4. Calling divide()         *
* 5. Calling print()          *
* 6. Quit                     *
*******************************
Select an option: 1

Calling add() --

        Numerator: 22
        Denominator  15

*******************************
*           Menu              *
* 1. Calling add()            *
* 2. Calling subtract()       *
* 3. Calling multiple()       *
* 4. Calling divide()         *
* 5. Calling print()          *
* 6. Quit                     *
*******************************
Select an option: 5

Calling print() --

        Numerator: 2
        Denominator  3

        Numerator: 4
        Denominator  5

*******************************
*           Menu              *
* 1. Calling add()            *
* 2. Calling subtract()       *
* 3. Calling multiple()       *
* 4. Calling divide()         *
* 5. Calling print()          *
* 6. Quit                     *
*******************************
Select an option: 2

Calling subtract() --

        Numerator: -2
        Denominator  15

*******************************
*           Menu              *
* 1. Calling add()            *
* 2. Calling subtract()       *
* 3. Calling multiple()       *
* 4. Calling divide()         *
* 5. Calling print()          *
* 6. Quit                     *
*******************************
Select an option: 5

Calling print() --

        Numerator: 2
        Denominator  3

        Numerator: 4
        Denominator  5

*******************************
*           Menu              *
* 1. Calling add()            *
* 2. Calling subtract()       *
* 3. Calling multiple()       *
* 4. Calling divide()         *
* 5. Calling print()          *
* 6. Quit                     *
*******************************
Select an option: 3

Calling multiply() --

        Numerator: 8
        Denominator  15

*******************************
*           Menu              *
* 1. Calling add()            *
* 2. Calling subtract()       *
* 3. Calling multiple()       *
* 4. Calling divide()         *
* 5. Calling print()          *
* 6. Quit                     *
*******************************
Select an option: 5

Calling print() --

        Numerator: 2
        Denominator  3

        Numerator: 4
        Denominator  5

*******************************
*           Menu              *
* 1. Calling add()            *
* 2. Calling subtract()       *
* 3. Calling multiple()       *
* 4. Calling divide()         *
* 5. Calling print()          *
* 6. Quit                     *
*******************************
Select an option: 4

Calling divide() --

        Numerator: 10
        Denominator  15

*******************************
*           Menu              *
* 1. Calling add()            *
* 2. Calling subtract()       *
* 3. Calling multiple()       *
* 4. Calling divide()         *
* 5. Calling print()          *
* 6. Quit                     *
*******************************
Select an option: 5

Calling print() --

        Numerator: 2
        Denominator  3

        Numerator: 4
        Denominator  5

*******************************
*           Menu              *
* 1. Calling add()            *
* 2. Calling subtract()       *
* 3. Calling multiple()       *
* 4. Calling divide()         *
* 5. Calling print()          *
* 6. Quit                     *
*******************************
Select an option: 6

Having Fun

*/

/*COMMENT
My program can't reach the requirement of the lab04
there are something I am confuesed:

1# I can't use the member in the stand alone function, it always warning about can't access to it
I made the setnum, it suppose to the get member data from private
but it still not working

2# I can't pass the object from an function to another function
for example, at the beginning, I planned 7 option as the requirement from the lab
but I found out I can't pass the object like frac1, frac2 to the menu function
so I set the init in the menu

*/
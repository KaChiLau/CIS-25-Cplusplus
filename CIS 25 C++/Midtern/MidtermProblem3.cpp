/*
 *Program Name: MidtermProblem3.cpp
 *Discussion:   C++ stuff
 */

#include<iostream>
using namespace std;

void printCommonDigit(int, int);
void displayinfo(void);

int main() {

	displayinfo();

	cout << "\nFor 1st set: \n" << endl;
	printCommonDigit(1268349000, 117225788);

	cout << "\nFor 2nd set: \n" << endl;
	printCommonDigit(1172245700, 983222276);

	return 0;
}

void printCommonDigit(int arg1, int arg2) {

	int ary1[10] = {0};
	int aryamount[10] = {0};	//store the amount of digits

	int temp1, temp2;
	int i;

	for (i = 0; i < 10; i++) {					//store the amount of digits from two integers

		temp1 = arg1;
		while(temp1 != 0) {						//store the first intergers
			if(i == temp1 % 10) {
				aryamount[i] += 1;
			}
			temp1 /= 10;
		}

		temp2 = arg2;	
		while(temp2 != 0) {						//store the second intergers
			if(i == temp2 % 10) {
				aryamount[i] += 1;
			}
			temp2 /= 10;
		}
	}

		for (int i = 0; i < 10; i++) {			//check which is the uncommon digits

		temp1 = arg1;
		temp2 = arg2;

		while (temp1 != 0) {
			if (i == temp1 % 10) {
				ary1[i] = 1;
				temp1 = 0;
			}
			temp1 /= 10;
		}
		
		while (temp2 != 0) {
			if (i == temp2 % 10) {
				if(ary1[i] == 1) {
					ary1[i] = 0;
				} else {
					ary1[i] = 1;
				}
				temp2 = 0;
			}
			temp2 /= 10;
		}
	}


	for (int i = 0; i < 10; i++) {
		cout << "Index :" << i << " : " << ary1[i] << endl;
	} 

	cout << "--------------------" << endl;
	
	for (int i = 0; i < 10; i++) {		//cout the amount of uncommon digt
		if(ary1[i] == 1) {
			cout << "\tDigit :" << i << " : " << aryamount[i] << endl;
		}
	} 
	
	cout << " " << endl;
	return;
}

void displayinfo() {

//	cout << "Class information --" << "\n";
	
	cout << "CIS 25 - C++ Programming" << "\n";

	cout << "Laney College\n";
	
	cout << "KaChiLau" << "\n\n";

	cout << "Assignment Information --" << "\n";

	cout << "  Assignment Number:  Midterm" 
		<< "\n\t\t      Problem #3" << "\n";
	
	cout << "  Written by:	      KaChiLau" << "\n";
	
	cout << "  Due Date:           November 20, 2012\n";

	return;
}
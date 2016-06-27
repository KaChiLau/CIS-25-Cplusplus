/**
 *Program Name: FractionKachiL.cpp
 *Discussion:   Class FractionKachiL
 */
#include "FractionKachiL.h"
#include <iostream>
using namespace std;

FractionKachiL::FractionKachiL() {
	num = 0;
	denom = 1;
}
FractionKachiL::FractionKachiL(const FractionKachiL& arg) {
	num = arg.num;
	denom = arg.denom;
}
FractionKachiL::FractionKachiL(int arg) {
	  num = arg;
	  if (arg){
		  denom = arg;
	  } else {
		  denom = 1; 
	  }
}

FractionKachiL::FractionKachiL(int arg, int arg2) {
	num = arg;
	if (arg2){
		denom = arg2;
	} else {
		denom = 1;
	}	
}
FractionKachiL::~FractionKachiL() {
}

void FractionKachiL::setNum(int arg) {
	num = arg;
	return;
}
int FractionKachiL::getNum() const {
	return num;
}
void FractionKachiL::setDenom(int arg) {
	if(arg != 0) {
		denom = arg;
	} else {
		denom = 1;
	}
	return;
}
int FractionKachiL::getDenom() const {
	return denom;
}

void FractionKachiL::print() const{
	cout << "Numerator: " << num 
		<< "\nDenominator: " << denom << endl;
	return;
}

FractionKachiL FractionKachiL::operator=(const FractionKachiL& arg) {
	num = arg.num;
	denom = arg.denom;
	reduce();

	return *this;
}
FractionKachiL FractionKachiL::operator+(const FractionKachiL& arg) {
	num = (num * arg.denom) - (denom * arg.num);
	denom = denom * arg.denom;
	reduce();
	return *this;
}
FractionKachiL FractionKachiL::operator-(const FractionKachiL& arg) {
	num = (num * arg.denom) - (denom * arg.num);
	denom = denom * arg.denom;
	reduce();
	return *this;
}
FractionKachiL FractionKachiL::operator*(const FractionKachiL& arg) {
	num = num * arg.num;
	denom = denom * arg.denom;
	reduce();
	return *this;
}
FractionKachiL FractionKachiL::operator/(const FractionKachiL& arg) {
	num = num * arg.denom;
	denom = denom * arg.num;
	reduce();
	return *this;
}
FractionKachiL FractionKachiL::operator!=(const FractionKachiL& arg) {
	return ((num * arg.denom) != (denom * arg.num));
}
FractionKachiL FractionKachiL::operator+=(const FractionKachiL& arg) {
	num = (num * arg.denom) + (denom * arg.num);
	denom = denom * arg.denom;
	reduce();
	return *this;
}
FractionKachiL FractionKachiL::operator==(const FractionKachiL& arg) {
	return ((num * arg.denom) == (denom * arg.num));
}
bool FractionKachiL::operator>(const FractionKachiL& arg) {
	return ((num / denom) > (arg.num / arg.denom));
}
bool FractionKachiL::operator<(const FractionKachiL& arg) {
	return ((num / denom) < (arg.num / arg.denom));
}

ostream& operator<<(ostream& out, FractionKachiL& old) {
	out <<"\n\tNum: " << old.num 
		<<"\n\tDenom: "<< old.denom << endl;
	return out;
}

istream& operator>>(istream& in, FractionKachiL& old) {
	cout << "Num: ";
	in >> old.num;
	cout << "Denom: ";
	in >> old.denom;
	return in;
}

void FractionKachiL::reduce() {
	int simplify = gcd();

	if (denom % 2 !=0) {
		return;
	} else {
		num = num / simplify;
		denom = denom / simplify;
	}
	return;
}
int FractionKachiL::gcd() {
	int gcd;
	int f = 0;

	if (num < denom) {
		gcd = num; 
	} else {
		gcd = denom;
	}

	while (gcd > 1 && !f) {
		if (num % gcd == 0 && denom % gcd == 0) {
			f = 1;
		} else {
			gcd--;
		}
	}
	return gcd;
}

void displayinfo() {

//	cout << "Class information --" << "\n";
	
	cout << "CIS 25 - C++ Programming" << "\n";

	cout << "Laney College\n";
	
	cout << "KaChiLau" << "\n\n";

	cout << "Assignment Information --" << "\n";

	cout << "  Assignment Number:  Lab 06" 
		<< "\n\t\t      Exercise #1" << "\n";
	
	cout << "  Written by:	      KaChiLau" << "\n";
	
	cout << "  Due Date:           December 4, 2012\n";

	return;
}


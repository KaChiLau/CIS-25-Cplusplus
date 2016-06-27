/**
 *Program Name: FractionKachiL.cpp
 *Discussion:   Class FractionKachiL
 */

#include <iostream>
#include "FractionKachiL.h"
using namespace std;

FractionKachiL::FractionKachiL() {					//default construcotr
	num = 0;
	denom = 1;
}

FractionKachiL::FractionKachiL(const FractionKachiL& arg) {	//copy constructor
	num = arg.num;
	denom = arg.denom;
}

FractionKachiL::FractionKachiL(int arg) {
	num = arg;
	denom = 1;
}

FractionKachiL::FractionKachiL(int arg, int arg2) {				//convert constructor
	num = arg;
	if (arg2){
		denom = arg2;
	} else {
		denom = 1;
	}	
}

FractionKachiL::~FractionKachiL() {					//destructor
}

void FractionKachiL::setNum(int arg) {
	num = arg;
	return;
}

int FractionKachiL::getNum() const {
	return num;
}

void FractionKachiL::setDenom(int arg) {
	if(arg) {
		denom = arg;
	} else {
		denom = 1;
	}
	return;
}

int FractionKachiL::getDenom() const {
	return denom;
}

void FractionKachiL::print() const {
	cout << "Numerator: " << num 
		<< "\nDenominator: " << denom << endl;
	return;
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
	}else{
		gcd = denom;
	}

	while (gcd > 1 && !f) {
		if (num % gcd == 0 && denom % gcd == 0) {
			f = 1;
		}else{
			gcd--;
		}
	}
	return gcd;
}

  //operator
FractionKachiL& FractionKachiL::operator=(const FractionKachiL& arg) {
	num = arg.num;
	denom = arg.denom;
	return *this;
}
FractionKachiL& FractionKachiL::operator+(const FractionKachiL& arg) {
	num = (num * arg.denom) + (denom * arg.num);
	denom = denom * arg.denom;
	reduce();
	return *this;
}
FractionKachiL& FractionKachiL::operator-(const FractionKachiL& arg) {
	num = (num * arg.denom) - (denom * arg.num);
	denom = denom * arg.denom;
	reduce();
	return *this;
}
FractionKachiL& FractionKachiL::operator*(const FractionKachiL& arg) {
	num = num * arg.num;
	denom = denom * arg.denom;
	reduce();
	return *this;
}
FractionKachiL& FractionKachiL::operator/(const FractionKachiL& arg) {
	num = num * arg.denom;
	denom = denom * arg.num;
	reduce();
	return *this;
}

  //member function
FractionKachiL FractionKachiL::add(const FractionKachiL& arg1, const FractionKachiL& arg2) {
	num = (arg1.num * arg2.denom) + (arg1.denom * arg2.num);
	denom = arg1.denom * arg2.denom;
	reduce();
	return *this;
}
FractionKachiL FractionKachiL::subtract(const FractionKachiL& arg1, const FractionKachiL& arg2) {
	num = (arg1.num * arg2.denom) - (arg1.denom * arg2.num);
	denom = arg1.denom * arg2.denom;
	reduce();
	return *this;
}
FractionKachiL FractionKachiL::multiply(const FractionKachiL& arg1, const FractionKachiL& arg2) {
	num = arg1.num * arg2.num;
	denom = arg1.denom * arg2.denom;
	reduce();
	return *this;
}
FractionKachiL FractionKachiL::divide(const FractionKachiL& arg1, const FractionKachiL& arg2) {
	num = arg1.num * arg2.denom;
	denom = arg1.denom * arg2.num;
	reduce();
	return *this;
}

	//stand alone function
FractionKachiL init() {

	int num;
	int denom;

	cout << "Num: ";
	cin >> num;

	cout << "Denom: ";
	cin >> denom; 

	FractionKachiL info(num, denom);

	return info;
}
FractionKachiL add(const FractionKachiL& arg1, const FractionKachiL& arg2) {

	FractionKachiL temp;

	temp.setNum((arg1.getNum() * arg2.getDenom()) + (arg1.getDenom() * arg2.getNum()));

	temp.setDenom(arg1.getDenom() * arg2.getDenom());

	temp.reduce();
	
	return temp;
}
FractionKachiL subtract(const FractionKachiL& arg1, const FractionKachiL& arg2) {
	
	FractionKachiL temp;

	temp.setNum((arg1.getNum() * arg2.getDenom()) + (arg1.getDenom() * arg2.getNum()));

	temp.setDenom(arg1.getDenom() * arg2.getDenom());

	temp.reduce();

	return temp;
}
FractionKachiL multiply(const FractionKachiL& arg1, const FractionKachiL& arg2) {

	FractionKachiL temp;

	temp.setNum(arg1.getNum() * arg2.getNum());

	temp.setDenom(arg1.getDenom() * arg2.getDenom());

	temp.reduce();

	return temp;
}
FractionKachiL divide(const FractionKachiL& arg1, const FractionKachiL& arg2) {

	FractionKachiL temp;

	temp.setNum(arg1.getNum() * arg2.getDenom());

	temp.setDenom(arg1.getDenom() * arg2.getNum());

	temp.reduce();

	return temp;
}
void print(const FractionKachiL& info) {

	cout << "Numerator: " << info.getNum()
		<< "\nDenominator: " << info.getDenom() << endl;

	return;
}

void displayinfo() {

//	cout << "Class information --" << "\n";
	
	cout << "CIS 25 - C++ Programming" << "\n";

	cout << "Laney College\n";
	
	cout << "KaChiLau" << "\n\n";

	cout << "Assignment Information --" << "\n";

	cout << "  Assignment Number:  Lab 05" 
		<< "\n\t\t      Exercise #1" << "\n";
	
	cout << "  Written by:	      KaChiLau" << "\n";
	
	cout << "  Due Date:           November 13, 2012\n";

	return;
}

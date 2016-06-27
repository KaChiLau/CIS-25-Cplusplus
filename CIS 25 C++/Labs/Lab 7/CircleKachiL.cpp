/**
*Program Name: CircleKachiL.cpp
*Discussion: Declaration File --
* CircleKachiL Class
*/
#include "fractionKachiL.h"
#include "pointKachiL.h"
#include "CircleKachiL.h"

#include <iostream>
using namespace std;

FractionKachiL PI(157,50);

// update and add constructors and destructor
CircleKachiL::CircleKachiL() {
	center = PointKachiL();
	radius = FractionKachiL();
}
CircleKachiL::CircleKachiL(const CircleKachiL& arg) {
	center = arg.center;
	radius = arg.radius;
}
CircleKachiL::CircleKachiL(FractionKachiL& arg) {
	arg = radius;
}
CircleKachiL::~CircleKachiL() {
}

// add getters & setters
void CircleKachiL::setRadius(FractionKachiL arg) {
	radius = arg;
}
FractionKachiL CircleKachiL::getRadius(void) const {
	return radius;
}

// add supported functions

FractionKachiL CircleKachiL::getArea() {
	return (PI * radius * radius);
}

FractionKachiL CircleKachiL::getPerimeter() {
	return (PI * radius * 2);
}

FractionKachiL CircleKachiL::getVolume() {
	cout << "They both have to volume" << endl;
	return FractionKachiL(0);
}
// add operator functions
CircleKachiL CircleKachiL::operator=(const CircleKachiL& arg) {
	radius = arg.radius;
	return *this;
}

ostream& operator<<(ostream& out, CircleKachiL& rOp) {
	out <<"\n\tCenter: " << rOp.center 
		<<"\n\tRadius: "<< rOp.radius << endl;
	return out;
}
istream& operator>>(istream& in, CircleKachiL& rIp) {
	cout << "\n---center--- " << endl;
	in >> rIp.center;
	cout << "\n---radius--- " << endl;
	in >> rIp.radius;
	return in;
}


/**
*Program Name: BoxKachiL.cpp
*Discussion: Declaration File --
* YourNameRectangle Class
*/

#include "BoxKachiL.h"

#include <iostream>
using namespace std;

// update and add constructors and destructor
BoxKachiL::BoxKachiL() {
	height = 1;
	}
BoxKachiL::BoxKachiL(const BoxKachiL& arg) {
	height = arg.height;
	}
BoxKachiL::BoxKachiL(FractionKachiL arg) {
	height = arg;
	}
BoxKachiL::~BoxKachiL() {
	}
// add getters & setters
void BoxKachiL::setheight(FractionKachiL arg) {
	height = arg;
	}
FractionKachiL BoxKachiL::getheight() const {
	return height;
	}

FractionKachiL BoxKachiL::getBoxArea() {
	return (getArea() * 2 + (getLen() *  getWid()) * 2 * height);
}

ostream& operator<<(ostream& out, BoxKachiL& old) {
	out <<"\n\theight :" << old.height << endl;
	return out;
}

istream& operator>>(istream& in, BoxKachiL& old) {
	cout << "height: ";
	in >> old.height;
	return in;
}
// add supported functions
// add operator functions

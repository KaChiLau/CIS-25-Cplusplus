
/**
*Program Name: Cylinder.h
*Discussion: Declaration File --
* YourNameRectangle Class
*/

#include "FractionKachiL.h"
#include "pointKachiL.h"
#include "CylinderKachiL.h"

#include <iostream>
using namespace std;


// update and add constructors and destructor
CylinderKachiL::CylinderKachiL() {
	height = FractionKachiL();
}
CylinderKachiL::CylinderKachiL(const CylinderKachiL& arg) {
	height = arg.height;
}
CylinderKachiL::CylinderKachiL(FractionKachiL arg) {
	height = arg;
}
CylinderKachiL::~CylinderKachiL() {
}
// add getters & setters
void CylinderKachiL::setheight(FractionKachiL arg) {
	height = arg;
}
FractionKachiL CylinderKachiL::getheight(void) const {
	return height;
}

FractionKachiL CylinderKachiL::getCylinderArea(void) {
	return getArea() * 2 * getheight();
}


ostream& operator<<(ostream& out, CylinderKachiL& old) {
	out <<"\n\theight :" << old.height << endl;
	return out;
}

istream& operator>>(istream& in, CylinderKachiL& old) {
	cout << "height: \n";
	in >> old.height;
	return in;
}

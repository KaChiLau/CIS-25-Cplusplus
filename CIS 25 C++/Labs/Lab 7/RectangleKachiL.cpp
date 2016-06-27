/**
*Program Name: RectangleKachiL.h
*Discussion: Declaration File --
* YourNameRectangle Class
*/
#include "RectangleKachiL.h"
#include "fractionKachiL.h"
#include "pointKachiL.h"

#include <iostream>
using namespace std;

RectangleKachiL::RectangleKachiL() {

	len = FractionKachiL();
	wid = FractionKachiL();
	upperleft = PointKachiL();
	lowerright = PointKachiL();
}

RectangleKachiL::RectangleKachiL(const RectangleKachiL& arg) {
	len = arg.len;
	wid = arg.wid;
	upperleft = arg.upperleft;
	lowerright = arg.lowerright;
}
RectangleKachiL::RectangleKachiL(FractionKachiL& arg, FractionKachiL& arg2) {
	arg = len;
	arg = wid;
}
RectangleKachiL::~RectangleKachiL() {
}

void RectangleKachiL::setLen(FractionKachiL arg) {
	len = arg;
}
FractionKachiL RectangleKachiL::getLen() const {
	return len;
}
void RectangleKachiL::setWid(FractionKachiL arg) {
	wid = arg;
}
FractionKachiL RectangleKachiL::getWid() const {
	return wid;
}

FractionKachiL RectangleKachiL::getArea() {
	len = upperleft.getX() - lowerright.getY();
	wid = upperleft.getX() - lowerright.getY();
	return (len * wid);
}

FractionKachiL RectangleKachiL::getVolume() {
	cout << "They both have to volume" << endl;
	return FractionKachiL(0);
}

void RectangleKachiL::print() {
	cout << "The rectangle information is --\n"
       << "\tUpperLeft point : " << upperleft
       << "\n\tLowerRight point : " << lowerright 
       << "\n\tLength : " << len
       << "\n\tWidth : " << wid <<  endl;
  return;
}

RectangleKachiL RectangleKachiL::operator=(const RectangleKachiL& arg) {
	len = arg.len;
	wid = arg.wid;
	return *this;
}

ostream& operator<<(ostream& out, RectangleKachiL& rOp) {
	out <<"\n\tupperleft: " << rOp.upperleft 
		<<"\n\tlowerright: "<< rOp.lowerright << endl;
	return out;
}
istream& operator>>(istream& in, RectangleKachiL& rIp) {
	cout << "\n---upperleft--- " << endl;
	in >> rIp.upperleft;
	cout << "\n---lowerright--- " << endl;
	in >> rIp.lowerright;
	return in;
}


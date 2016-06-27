/**
*Program Name: pointKachiL.cpp
*Discussion: Declaration File --
* PointYourName Class
*/

#include "fractionKachiL.h"
#include "pointKachiL.h"
#include <iostream>
using namespace std;

PointKachiL::PointKachiL() {
}
PointKachiL::PointKachiL(const PointKachiL& arg) {
	x= arg.x;
	y = arg.y;
}
PointKachiL::PointKachiL(FractionKachiL arg, FractionKachiL arg2) {
	x = arg;
	y = arg2;
}
PointKachiL::PointKachiL(FractionKachiL arg) {
	x = arg;
	y = arg;
}
PointKachiL::~PointKachiL() {
}

FractionKachiL PointKachiL::setX(FractionKachiL arg) {
	x = arg;
	return x;
}
FractionKachiL PointKachiL::setY(FractionKachiL arg) {
	y = arg;
	return y;
}
FractionKachiL PointKachiL::getX() {
	return x;
}
FractionKachiL PointKachiL::getY() {
	return y;
}

void PointKachiL::getXY(FractionKachiL arg, FractionKachiL arg2) {
	arg = x;
	arg2 = y;
}
void PointKachiL::setXY(FractionKachiL arg, FractionKachiL arg2) {
	x = arg;
	y = arg2;
}

void PointKachiL::moveBy(FractionKachiL delX, FractionKachiL delY) {
	x = x + delX;
	y = y + delY;
}
void PointKachiL::moveBy(int iOld) {
	x = iOld;
	y = iOld;
	return;
}

void PointKachiL::flipByX() {
	y = y;
	x = x * (-1);
	return;
}
void PointKachiL::flipByY() {
	x = x;
	y = y * (-1);
	return;
}
void PointKachiL::flipThroughOrigin() {
}

void PointKachiL::print() {
	x = x * (-1);
	y = y * (-1);
	return;
}

PointKachiL PointKachiL::operator=(const PointKachiL& arg) {
	x = arg.x;
	y = arg.y;
	return *this;
}
PointKachiL PointKachiL::operator+(const PointKachiL& arg) {
	x = x + arg.x;
	y = y + arg.y;
	return *this;
}
PointKachiL PointKachiL::operator-(const PointKachiL& arg) {
	x = x - arg.x;
	y = y - arg.y;
	return *this;
}
PointKachiL PointKachiL::operator*(const PointKachiL& arg) {
	x = x * arg.x;
	y = y * arg.y;
	return *this;
}
PointKachiL PointKachiL::operator/(const PointKachiL& arg) {
	x = x / arg.x;
	y = y / arg.y;
	return *this;
}

PointKachiL PointKachiL::operator+=(const PointKachiL& arg) {
	x += arg.x;
	y += arg.y;
	return *this;
}

PointKachiL PointKachiL::operator>(const PointKachiL& arg) {
	return (x > arg.y);
}
PointKachiL PointKachiL::operator<(const PointKachiL& arg) {
	return (y < arg.x);
}
PointKachiL PointKachiL::operator==(const PointKachiL& arg) {
	return (x == arg.y);
}

ostream& operator<<(ostream& out, PointKachiL& rOp) {
	out <<"\n\tX: " << rOp.x 
		<<"\n\tY: "<< rOp.y << endl;
	return out;
}

istream& operator>>(istream& in , PointKachiL& rIp) {
	cout << "\nFor X: " << endl;
	in >> rIp.x;
	cout << "\nFor Y:" << endl;
	in >> rIp.y;
	return in;
}

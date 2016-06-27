/**
*Program Name: pointKachiL.h
*Discussion: Declaration File --
* PointYourName Class
*/
#ifndef POINTKACHIL_H
#define POINTKACHIL_H

#include "fractionKachiL.h"
#include <iostream>
using namespace std;

class PointKachiL {
public:
	PointKachiL();
	PointKachiL(const PointKachiL&);
	PointKachiL(FractionKachiL, FractionKachiL);
	PointKachiL(FractionKachiL);
	~PointKachiL();

	FractionKachiL setX(FractionKachiL);
	FractionKachiL setY(FractionKachiL);
	FractionKachiL getX();
	FractionKachiL getY();

	void getXY(FractionKachiL, FractionKachiL);
	void setXY(FractionKachiL, FractionKachiL);

	void moveBy(FractionKachiL, FractionKachiL);
	void moveBy(int);

	void flipByX();
	void flipByY();
	void flipThroughOrigin();

	void print();

	PointKachiL operator=(const PointKachiL&);
	PointKachiL operator+(const PointKachiL&);
	PointKachiL operator-(const PointKachiL&);
	PointKachiL operator*(const PointKachiL&);
	PointKachiL operator/(const PointKachiL&);
	PointKachiL operator+=(const PointKachiL&);

	PointKachiL operator>(const PointKachiL&);
	PointKachiL operator<(const PointKachiL&);
	PointKachiL operator==(const PointKachiL&);

	friend ostream& operator<<(ostream&, PointKachiL&);
	friend istream& operator>>(istream&, PointKachiL&);

private:
FractionKachiL x; // x-coordinate of the point
FractionKachiL y; // y-coordinate of the point
};

#endif
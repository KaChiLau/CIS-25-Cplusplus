/**
*Program Name: RectangleKachiL.h
*Discussion: Declaration File --
* YourNameRectangle Class
*/
#ifndef RECTANGLEKACHIL_H
#define RECTANGLEKACHIL_H

#include "fractionKachiL.h"
#include "pointKachiL.h"

#include <iostream>
using namespace std;
class RectangleKachiL {
public:
	RectangleKachiL();
	RectangleKachiL(const RectangleKachiL&);
	RectangleKachiL(FractionKachiL&, FractionKachiL&);
	~RectangleKachiL();

	void setLen(FractionKachiL);
	FractionKachiL getLen(void) const;	//no &, *

	void setWid(FractionKachiL);
	FractionKachiL getWid(void) const;

	FractionKachiL getArea();
	FractionKachiL getVolume();
	void print(void);
	RectangleKachiL operator=(const RectangleKachiL&);

	friend ostream& operator<<(ostream& out, RectangleKachiL& rOp);
	friend istream& operator>>(istream& in, RectangleKachiL& rIp);

private:
FractionKachiL len; // No negative value allowed
FractionKachiL wid; // No negative value allowed
PointKachiL lowerright;
PointKachiL upperleft;

};
// your I/O OPERATOR functions here
#endif

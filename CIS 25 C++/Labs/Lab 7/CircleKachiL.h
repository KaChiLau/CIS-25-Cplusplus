/**
*Program Name: CircleKachiL.h
*Discussion: Declaration File --
* CircleKachiL Class
*/
#ifndef CIRCLEKACHIL_H
#define CIRCLEKACHIL_H

#include "fractionKachiL.h"
#include "pointKachiL.h"

#include <iostream>
using namespace std;

class CircleKachiL {
public:

// update and add constructors and destructor
	CircleKachiL();
	CircleKachiL(const CircleKachiL&);
	CircleKachiL(FractionKachiL&);
	~CircleKachiL();

// add getters & setters
	void setRadius(FractionKachiL);
	FractionKachiL getRadius(void) const;	//no &, *

// add supported functions
	FractionKachiL getArea();
	FractionKachiL getPerimeter();
	FractionKachiL getVolume();

	void print(void);

// add operator functions
	CircleKachiL operator=(const CircleKachiL&);

	friend ostream& operator<<(ostream&, CircleKachiL& rOp);
	friend istream& operator>>(istream&, CircleKachiL& rIp);

private:
PointKachiL center;
FractionKachiL radius;
};

#endif

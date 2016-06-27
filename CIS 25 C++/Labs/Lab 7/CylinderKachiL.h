
/**
*Program Name: Cylinder.h
*Discussion: Declaration File --
* YourNameRectangle Class
*/

#ifndef CYLINDERKACHIL_H
#define CYLINDERKACHIL_H

#include "FractionKachiL.h"
#include "pointKachiL.h"
#include "CircleKachiL.h"

#include <iostream>
using namespace std;

class CylinderKachiL : public CircleKachiL {
public:
// update and add constructors and destructor
	CylinderKachiL();
	CylinderKachiL(const CylinderKachiL&);
	CylinderKachiL(FractionKachiL);
	~CylinderKachiL();
// add getters & setters
	void setheight(FractionKachiL);
	FractionKachiL getheight(void) const;
	FractionKachiL getCylinderArea(void);
	void print(void);
// add supported functions
// add operator functions

	friend ostream& operator<<(ostream&, CylinderKachiL&);
	friend istream& operator>>(istream&, CylinderKachiL&);

private:
FractionKachiL height;
};

#endif
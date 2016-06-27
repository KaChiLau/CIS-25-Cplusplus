
/**
*Program Name: BoxKachiL.h
*Discussion: Declaration File --
* YourNameRectangle Class
*/

#ifndef BOXKACHIL_H
#define BOXKACHIL_H

#include "FractionKachiL.h"
#include "pointKachiL.h"
#include "RectangleKachiL.h"

#include <iostream>
using namespace std;

class BoxKachiL : public RectangleKachiL {
public:
// update and add constructors and destructor
	BoxKachiL();
	BoxKachiL(const BoxKachiL&);
	BoxKachiL(FractionKachiL);
	~BoxKachiL();
// add getters & setters
	void setheight(FractionKachiL);
	FractionKachiL getheight(void) const;
	FractionKachiL getBoxArea(void);
	void print(void);
	
	friend ostream& operator<<(ostream&, BoxKachiL&);
	friend istream& operator>>(istream&, BoxKachiL&);

// add supported functions
// add operator functions
private:
FractionKachiL height;
};

#endif
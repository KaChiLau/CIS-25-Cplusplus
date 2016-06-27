/**
 *Program Name: Menu.h
 *Discussion:   Class Fraction
 */

#ifndef MENU_H
#define MENU_H
#include "FractionKachiL.h"

class Menu {

	FractionKachiL a;
	FractionKachiL b;
	FractionKachiL c;
	int ok;

public:

	void mainmenu(void);
	void initializingMenu(void);
	void addingMenu(void);
	void subtractingMenu(void);
	void multiplyingMenu(void);
	void dividingMenu(void);
	void printingMenu(void);
};

#endif
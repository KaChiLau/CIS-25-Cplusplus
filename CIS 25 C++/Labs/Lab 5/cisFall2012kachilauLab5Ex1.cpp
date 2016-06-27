/**
*Program Name: cisFall2012kachilauLab5Ex1.cpp
*Discussion:   Lab#5 Ex1
*author:       KaChiLau
*Date:         10/23/2012
*/

#include <iostream>
#include "FractionKachiL.h"
#include "Menu.h"
using namespace std;

int main() {

	displayinfo();

	Menu menu;

	menu.mainmenu();

	return 0;
}

/*OUTPUT


********************************
*       SUBTRACTING MENU       *
*                              *
* 1. subtract() - Member       *
* 2. subtract() - Stand Alone  *
* 3. operator- () - Member     *
* 4. Return to Previous Menu   *
********************************
Select an option (1, 2, 3 or 4): 4

Return to previous MENU

*********************
*       Menu        *
*                   *
* 1. Initializing   *
* 2. Adding         *
* 3. Subtracting    *
* 4. Multiplying    *
* 5. Dividing       *
* 6. Printing       *
* 7. Quit           *
*********************
Select an option (use integer value only): 6

********************************
*        PRINTING MENU         *
*                              *
* 1. print() - Member          *
* 2. print () - StandAlone     *
* 3. Return to Previous Menu   *
********************************
Select an option (1, 2, or 3): 2

Calling print() - Stand Alone...

Numerator: 1
Denominator: -4

********************************
*        PRINTING MENU         *
*                              *
* 1. print() - Member          *
* 2. print () - StandAlone     *
* 3. Return to Previous Menu   *
********************************
Select an option (1, 2, or 3): 3

Return to previous MENU

*********************
*       Menu        *
*                   *
* 1. Initializing   *
* 2. Adding         *
* 3. Subtracting    *
* 4. Multiplying    *
* 5. Dividing       *
* 6. Printing       *
* 7. Quit           *
*********************
Select an option (use integer value only): 1

********************************
*      INITIALIZING MENU       *
*                              *
* 1. init() - Stand Alone      *
* 2. operator= () - Member     *
* 3. Return to Previous Menu   *
********************************
Select an option (1, 2, or 3): 1

Calling init() - Stand Alone...

Num: 1
Denom: 2
Num: 3
Denom: 4

********************************
*      INITIALIZING MENU       *
*                              *
* 1. init() - Stand Alone      *
* 2. operator= () - Member     *
* 3. Return to Previous Menu   *
********************************
Select an option (1, 2, or 3): 3

Return to previous MENU

*********************
*       Menu        *
*                   *
* 1. Initializing   *
* 2. Adding         *
* 3. Subtracting    *
* 4. Multiplying    *
* 5. Dividing       *
* 6. Printing       *
* 7. Quit           *
*********************
Select an option (use integer value only): 4

*********************************
*       MULTIPLYING MENU        *
*                               *
* 1. multiplying() - Member     *
* 2. multiplying() - Stand Alone*
* 3. operator* () - Member      *
* 4. Return to Previous Menu    *
*********************************
Select an option (1, 2, 3 or 4): 2

Calling multiplying() - Stand Alone...


*********************************
*       MULTIPLYING MENU        *
*                               *
* 1. multiplying() - Member     *
* 2. multiplying() - Stand Alone*
* 3. operator* () - Member      *
* 4. Return to Previous Menu    *
*********************************
Select an option (1, 2, 3 or 4): 4

Return to previous MENU

*********************
*       Menu        *
*                   *
* 1. Initializing   *
* 2. Adding         *
* 3. Subtracting    *
* 4. Multiplying    *
* 5. Dividing       *
* 6. Printing       *
* 7. Quit           *
*********************
Select an option (use integer value only): 6

********************************
*        PRINTING MENU         *
*                              *
* 1. print() - Member          *
* 2. print () - StandAlone     *
* 3. Return to Previous Menu   *
********************************
Select an option (1, 2, or 3): 2

Calling print() - Stand Alone...

Numerator: 3
Denominator: 8

********************************
*        PRINTING MENU         *
*                              *
* 1. print() - Member          *
* 2. print () - StandAlone     *
* 3. Return to Previous Menu   *
********************************
Select an option (1, 2, or 3): 3

Return to previous MENU

*********************
*       Menu        *
*                   *
* 1. Initializing   *
* 2. Adding         *
* 3. Subtracting    *
* 4. Multiplying    *
* 5. Dividing       *
* 6. Printing       *
* 7. Quit           *
*********************
Select an option (use integer value only): 1

********************************
*      INITIALIZING MENU       *
*                              *
* 1. init() - Stand Alone      *
* 2. operator= () - Member     *
* 3. Return to Previous Menu   *
********************************
Select an option (1, 2, or 3): 1

Calling init() - Stand Alone...

Num: 1
Denom: 2
Num: 3
Denom: 4

********************************
*      INITIALIZING MENU       *
*                              *
* 1. init() - Stand Alone      *
* 2. operator= () - Member     *
* 3. Return to Previous Menu   *
********************************
Select an option (1, 2, or 3): 3

Return to previous MENU

*********************
*       Menu        *
*                   *
* 1. Initializing   *
* 2. Adding         *
* 3. Subtracting    *
* 4. Multiplying    *
* 5. Dividing       *
* 6. Printing       *
* 7. Quit           *
*********************
Select an option (use integer value only): 5

********************************
*        DIVIDING MENU         *
*                              *
* 1. dividing() - Member       *
* 2. dividing() - Stand Alone  *
* 3. operator/ () - Member     *
* 4. Return to Previous Menu   *
********************************
Select an option (1, 2, 3 or 4): 3

Calling operator/() - member...


********************************
*        DIVIDING MENU         *
*                              *
* 1. dividing() - Member       *
* 2. dividing() - Stand Alone  *
* 3. operator/ () - Member     *
* 4. Return to Previous Menu   *
********************************
Select an option (1, 2, 3 or 4): 4

Return to previous MENU

*********************
*       Menu        *
*                   *
* 1. Initializing   *
* 2. Adding         *
* 3. Subtracting    *
* 4. Multiplying    *
* 5. Dividing       *
* 6. Printing       *
* 7. Quit           *
*********************
Select an option (use integer value only): 6

********************************
*        PRINTING MENU         *
*                              *
* 1. print() - Member          *
* 2. print () - StandAlone     *
* 3. Return to Previous Menu   *
********************************
Select an option (1, 2, or 3): 1

Calling print() - member...

Numerator: 2
Denominator: 3

********************************
*        PRINTING MENU         *
*                              *
* 1. print() - Member          *
* 2. print () - StandAlone     *
* 3. Return to Previous Menu   *
********************************
Select an option (1, 2, or 3): 3

Return to previous MENU

*********************
*       Menu        *
*                   *
* 1. Initializing   *
* 2. Adding         *
* 3. Subtracting    *
* 4. Multiplying    *
* 5. Dividing       *
* 6. Printing       *
* 7. Quit           *
*********************
Select an option (use integer value only): 7

Having Fun...!

Press any key to continue . . .
*/

/*OUTPUT2


********************************
*       SUBTRACTING MENU       *
*                              *
* 1. subtract() - Member       *
* 2. subtract() - Stand Alone  *
* 3. operator- () - Member     *
* 4. Return to Previous Menu   *
********************************
Select an option (1, 2, 3 or 4): 4

Return to previous MENU

*********************
*       Menu        *
*                   *
* 1. Initializing   *
* 2. Adding         *
* 3. Subtracting    *
* 4. Multiplying    *
* 5. Dividing       *
* 6. Printing       *
* 7. Quit           *
*********************
Select an option (use integer value only): 6

********************************
*        PRINTING MENU         *
*                              *
* 1. print() - Member          *
* 2. print () - StandAlone     *
* 3. Return to Previous Menu   *
********************************
Select an option (1, 2, or 3): 2

Calling print() - Stand Alone...

Numerator: -118
Denominator: 99

********************************
*        PRINTING MENU         *
*                              *
* 1. print() - Member          *
* 2. print () - StandAlone     *
* 3. Return to Previous Menu   *
********************************
Select an option (1, 2, or 3): 3

Return to previous MENU

*********************
*       Menu        *
*                   *
* 1. Initializing   *
* 2. Adding         *
* 3. Subtracting    *
* 4. Multiplying    *
* 5. Dividing       *
* 6. Printing       *
* 7. Quit           *
*********************
Select an option (use integer value only): 1

********************************
*      INITIALIZING MENU       *
*                              *
* 1. init() - Stand Alone      *
* 2. operator= () - Member     *
* 3. Return to Previous Menu   *
********************************
Select an option (1, 2, or 3): 1

Calling init() - Stand Alone...

Num: -5
Denom: 9
Num: 7
Denom: 11

********************************
*      INITIALIZING MENU       *
*                              *
* 1. init() - Stand Alone      *
* 2. operator= () - Member     *
* 3. Return to Previous Menu   *
********************************
Select an option (1, 2, or 3): 3

Return to previous MENU

*********************
*       Menu        *
*                   *
* 1. Initializing   *
* 2. Adding         *
* 3. Subtracting    *
* 4. Multiplying    *
* 5. Dividing       *
* 6. Printing       *
* 7. Quit           *
*********************
Select an option (use integer value only): 4

*********************************
*       MULTIPLYING MENU        *
*                               *
* 1. multiplying() - Member     *
* 2. multiplying() - Stand Alone*
* 3. operator* () - Member      *
* 4. Return to Previous Menu    *
*********************************
Select an option (1, 2, 3 or 4): 2

Calling multiplying() - Stand Alone...


*********************************
*       MULTIPLYING MENU        *
*                               *
* 1. multiplying() - Member     *
* 2. multiplying() - Stand Alone*
* 3. operator* () - Member      *
* 4. Return to Previous Menu    *
*********************************
Select an option (1, 2, 3 or 4): 4

Return to previous MENU

*********************
*       Menu        *
*                   *
* 1. Initializing   *
* 2. Adding         *
* 3. Subtracting    *
* 4. Multiplying    *
* 5. Dividing       *
* 6. Printing       *
* 7. Quit           *
*********************
Select an option (use integer value only): 6

********************************
*        PRINTING MENU         *
*                              *
* 1. print() - Member          *
* 2. print () - StandAlone     *
* 3. Return to Previous Menu   *
********************************
Select an option (1, 2, or 3): 1

Calling print() - member...

Numerator: -35
Denominator: 99

********************************
*        PRINTING MENU         *
*                              *
* 1. print() - Member          *
* 2. print () - StandAlone     *
* 3. Return to Previous Menu   *
********************************
Select an option (1, 2, or 3): 3

Return to previous MENU

*********************
*       Menu        *
*                   *
* 1. Initializing   *
* 2. Adding         *
* 3. Subtracting    *
* 4. Multiplying    *
* 5. Dividing       *
* 6. Printing       *
* 7. Quit           *
*********************
Select an option (use integer value only): 1

********************************
*      INITIALIZING MENU       *
*                              *
* 1. init() - Stand Alone      *
* 2. operator= () - Member     *
* 3. Return to Previous Menu   *
********************************
Select an option (1, 2, or 3): 2

Calling operator=() - Member...

Num: -5
Denom: 9
Num: 7
Denom: 11

********************************
*      INITIALIZING MENU       *
*                              *
* 1. init() - Stand Alone      *
* 2. operator= () - Member     *
* 3. Return to Previous Menu   *
********************************
Select an option (1, 2, or 3): 3

Return to previous MENU

*********************
*       Menu        *
*                   *
* 1. Initializing   *
* 2. Adding         *
* 3. Subtracting    *
* 4. Multiplying    *
* 5. Dividing       *
* 6. Printing       *
* 7. Quit           *
*********************
Select an option (use integer value only): 5

********************************
*        DIVIDING MENU         *
*                              *
* 1. dividing() - Member       *
* 2. dividing() - Stand Alone  *
* 3. operator/ () - Member     *
* 4. Return to Previous Menu   *
********************************
Select an option (1, 2, 3 or 4): 1

Calling divide() - member...


********************************
*        DIVIDING MENU         *
*                              *
* 1. dividing() - Member       *
* 2. dividing() - Stand Alone  *
* 3. operator/ () - Member     *
* 4. Return to Previous Menu   *
********************************
Select an option (1, 2, 3 or 4): 4

Return to previous MENU

*********************
*       Menu        *
*                   *
* 1. Initializing   *
* 2. Adding         *
* 3. Subtracting    *
* 4. Multiplying    *
* 5. Dividing       *
* 6. Printing       *
* 7. Quit           *
*********************
Select an option (use integer value only): 6

********************************
*        PRINTING MENU         *
*                              *
* 1. print() - Member          *
* 2. print () - StandAlone     *
* 3. Return to Previous Menu   *
********************************
Select an option (1, 2, or 3): 1

Calling print() - member...

Numerator: -55
Denominator: 63

********************************
*        PRINTING MENU         *
*                              *
* 1. print() - Member          *
* 2. print () - StandAlone     *
* 3. Return to Previous Menu   *
********************************
Select an option (1, 2, or 3): 3

Return to previous MENU

*********************
*       Menu        *
*                   *
* 1. Initializing   *
* 2. Adding         *
* 3. Subtracting    *
* 4. Multiplying    *
* 5. Dividing       *
* 6. Printing       *
* 7. Quit           *
*********************
Select an option (use integer value only): 7

Having Fun...!

Press any key to continue . . .
*/
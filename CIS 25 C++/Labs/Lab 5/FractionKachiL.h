/**
 *Program Name: FractionKachiL.h
 *Discussion:   Class FractionKachiL
 */
#ifndef FRACTIONKACHIL_H
#define FRACTIONKACHIL_H
//#include "Menu.h"

class FractionKachiL {
public:
  FractionKachiL();					//default construcotr
  FractionKachiL(const FractionKachiL&);	//copy constructor
  FractionKachiL(int);
  FractionKachiL(int, int);				//convert constructor, //convert two ints to a object

  ~FractionKachiL();					//destructor

  void setNum(int);				
  int getNum(void) const;

  void setDenom(int);
  int getDenom(void) const;

  void print(void) const;

  //operator
  FractionKachiL& operator=(const FractionKachiL&);
  FractionKachiL& operator+(const FractionKachiL&);
  FractionKachiL& operator-(const FractionKachiL&);
  FractionKachiL& operator*(const FractionKachiL&);
  FractionKachiL& operator/(const FractionKachiL&);

  //member function
  FractionKachiL add(const FractionKachiL&,const FractionKachiL&);
  FractionKachiL subtract(const FractionKachiL&,const FractionKachiL&);
  FractionKachiL multiply(const FractionKachiL&,const FractionKachiL&);
  FractionKachiL divide(const FractionKachiL&,const FractionKachiL&);
  void reduce();
  int gcd();

private:
  int num;	//global varriable
  int denom;
};

//stand alone
FractionKachiL init();
FractionKachiL add(const FractionKachiL&, const FractionKachiL&);
FractionKachiL subtract(const FractionKachiL&, const FractionKachiL&);
FractionKachiL multiply(const FractionKachiL&, const FractionKachiL&);
FractionKachiL divide(const FractionKachiL&, const FractionKachiL&);
void print(const FractionKachiL&);
void displayinfo(void);

#endif

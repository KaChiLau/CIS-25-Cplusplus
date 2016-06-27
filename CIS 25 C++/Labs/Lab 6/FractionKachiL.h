/**
 *Program Name: FractionKachiL.h
 *Discussion:   Class FractionKachiL
 */
#ifndef FRACTIONKACHIL_H
#define FRACTIONKACHIL_H

#include <iostream>
using namespace std;

class FractionKachiL {
public:
  FractionKachiL();				
  FractionKachiL(const FractionKachiL&);	
  FractionKachiL(int);
  FractionKachiL(int, int);				
  ~FractionKachiL();

  void setNum(int);				
  int getNum(void) const;
  void setDenom(int);
  int getDenom(void) const;

  void print(void) const;

  FractionKachiL operator=(const FractionKachiL&);
  FractionKachiL operator+(const FractionKachiL&);
  FractionKachiL operator-(const FractionKachiL&);
  FractionKachiL operator*(const FractionKachiL&);
  FractionKachiL operator/(const FractionKachiL&);
  FractionKachiL operator!=(const FractionKachiL&);
  FractionKachiL operator+=(const FractionKachiL&);
  FractionKachiL operator==(const FractionKachiL&);
  bool operator>(const FractionKachiL&);
  bool operator<(const FractionKachiL&);

  friend ostream& operator<<(ostream&, FractionKachiL&);
  friend istream& operator>>(istream&, FractionKachiL&);

  void reduce();
  int gcd();

private:
  int num;	//global varriable
  int denom;
};

void displayinfo(void);

#endif

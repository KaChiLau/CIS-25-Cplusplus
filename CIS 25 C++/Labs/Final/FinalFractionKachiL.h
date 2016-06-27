/*file name: FinalFractionKachiL.h
 *written by : Kachilau
 */

#ifndef FINALFRACTIONKACHIL_H
#define FINALFRACTIONKACHIL_H

#include <iostream>
using namespace std;

class FinalFractionKachiL {
public:
  FinalFractionKachiL();
  FinalFractionKachiL(int);
  FinalFractionKachiL(int, int);
  FinalFractionKachiL(const FinalFractionKachiL&);
  ~FinalFractionKachiL();

  FinalFractionKachiL(ostream&);

  FinalFractionKachiL operator+(const FinalFractionKachiL&);
  FinalFractionKachiL operator+(int);
  FinalFractionKachiL operator-(const FinalFractionKachiL&);
  FinalFractionKachiL operator*(const FinalFractionKachiL&);
  FinalFractionKachiL operator*(int);
  FinalFractionKachiL operator/(const FinalFractionKachiL&);
  FinalFractionKachiL& operator=(const FinalFractionKachiL&);
  FinalFractionKachiL& operator=(int);

  bool operator<(const FinalFractionKachiL&);
  bool operator<(int);
  bool operator>(const FinalFractionKachiL&);
  bool operator==(const FinalFractionKachiL&);

  void reduceFraction();

  int getNum() const;
  int getDenom()const;
  void setNum( const int );
  void setDenom( const int );

  friend ostream& operator<<(ostream& out, const FinalFractionKachiL& arg);
  friend istream& operator>>(istream& in, FinalFractionKachiL& arg);

private:
  int num;
  int denom;
};
#endif

  
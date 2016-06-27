/**
 *File name: FinalCircleKachiL.h
 *Written by: Kachilau
 *Discussion:    Declaration File --
 *                 FinalCircleKachiL Class 
 */

#ifndef FINALCIRCLEKACHIL_H
#define FINALCIRCLEKACHIL_H
#include "FinalFractionKachiL.h"
#include "FinalPointKachiL.h"
#include <iostream>
using namespace std;

class FinalCircleKachiL {
public:
  FinalCircleKachiL();
  FinalCircleKachiL(const FinalFractionKachiL&);
  FinalCircleKachiL(const FinalPointKachiL&, const FinalFractionKachiL&);
  FinalCircleKachiL(const FinalCircleKachiL&);
  ~FinalCircleKachiL();

  FinalFractionKachiL getRadius() const;
  FinalPointKachiL getCenter() const;
  void setRadius(const FinalFractionKachiL&);
  void setCenter(const FinalPointKachiL&);

  FinalFractionKachiL getArea();
  FinalFractionKachiL getPerimeter();
  FinalFractionKachiL getVolume();

  friend ostream& operator<<(ostream&, FinalCircleKachiL);

private:
  FinalPointKachiL center;
  FinalFractionKachiL radius;
};
#endif


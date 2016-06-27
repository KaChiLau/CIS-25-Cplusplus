/**
 *File name: FinalCylinderKachiL.h
 *Written by: KachiLau
 *Discussion:    Declaration File --
 *                 FinalCylinderKachiL Class 
 */

#ifndef FINALCYLINDERKACHIL_H
#define FINALCYLINDERKACHIL_H
#include "FinalFractionKachiL.h"
#include "FinalCircleKachiL.h"
#include "FinalPointKachiL.h"
#include <iostream>
using namespace std;

class FinalCylinderKachiL : public FinalCircleKachiL {
public:
  FinalCylinderKachiL();
  FinalCylinderKachiL(const FinalFractionKachiL&);
  FinalCylinderKachiL(const FinalFractionKachiL&, const FinalFractionKachiL&);
  FinalCylinderKachiL(const FinalPointKachiL&, const FinalFractionKachiL&, const FinalFractionKachiL&);
  FinalCylinderKachiL(const FinalCylinderKachiL&);
  FinalCylinderKachiL(const FinalCircleKachiL&, const FinalFractionKachiL&);
  ~FinalCylinderKachiL();

  FinalPointKachiL getCenter() const;
  FinalFractionKachiL getHeigth() const;
  FinalFractionKachiL getRadius() const;

  void setCenter(const FinalPointKachiL&);
  void setRadius(const FinalFractionKachiL&);
  void setHeigth(const FinalFractionKachiL&);

  FinalFractionKachiL getArea();
  FinalFractionKachiL getVolume();

  friend ostream& operator<<( ostream&, FinalCylinderKachiL );

private:
  FinalFractionKachiL heigth;
};
#endif

/**
 *File name : FinalBoxKachiL.h
 *Written by : KachiLau
 **Discussion:    Declaration File --
 *                 FinalBoxKachiL Class 
 */

#ifndef FINALBOXKACHIL_H
#define FINALBOXKACHIL_H
#include "FinalRectangleKachiL.h"
#include "FinalFractionKachiL.h"
#include "FinalPointKachiL.h"
#include <iostream>

class FinalBoxKachiL : public FinalRectangleKachiL {
public:
  FinalBoxKachiL();
  FinalBoxKachiL(const FinalFractionKachiL&);
  FinalBoxKachiL(const FinalFractionKachiL&, const FinalFractionKachiL&, const FinalFractionKachiL&);
  FinalBoxKachiL(const FinalRectangleKachiL, const FinalFractionKachiL);
  FinalBoxKachiL(const FinalBoxKachiL&);
  ~FinalBoxKachiL();

  FinalFractionKachiL getLen() const;
  FinalFractionKachiL getWid() const;
  FinalFractionKachiL getHeigth() const;

  void setLen (const FinalFractionKachiL&);
  void setWid (const FinalFractionKachiL&);
  void setHeigth (const FinalFractionKachiL&);

  FinalFractionKachiL getArea();
  FinalFractionKachiL getVolume();

  bool operator<(const FinalBoxKachiL&);
  bool operator>(const FinalBoxKachiL&);
  bool operator==(const FinalBoxKachiL&);

  friend ostream& operator<<(ostream& out, FinalBoxKachiL);

private:
  FinalFractionKachiL heigth;
};
#endif
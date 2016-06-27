/**
 *File name: FinalRectangleKachiL.h
 *Written by: KachiL
 *Discussion:    Declaration File --
 *                 FinalRectangleKachiL Class 
 */

#ifndef FINALRECTANGLEKACHIL_H
#define FINALRECTANGLEKACHIL_H
#include "FinalFractionKachiL.h"
#include "FinalPointKachiL.h"
#include <iostream>
using namespace std;

class FinalRectangleKachiL {
public:
  FinalRectangleKachiL();
  FinalRectangleKachiL(const FinalFractionKachiL&, const FinalFractionKachiL& );
  FinalRectangleKachiL(const FinalPointKachiL&,const FinalFractionKachiL&, const FinalFractionKachiL&);
  FinalRectangleKachiL(const FinalPointKachiL&, const FinalPointKachiL&);
  FinalRectangleKachiL(const FinalRectangleKachiL&);
  ~FinalRectangleKachiL();

  FinalFractionKachiL getLen() const;
  FinalFractionKachiL getWid() const;
  void setLen(const FinalFractionKachiL&);
  void setWid(const FinalFractionKachiL&);

  FinalRectangleKachiL(ostream&);

  FinalFractionKachiL getArea();
  FinalFractionKachiL getVolume();

  void compareByVolume(const FinalRectangleKachiL&);
  void compareByArea(const FinalRectangleKachiL&);

  bool operator<(FinalRectangleKachiL);
  bool operator>(FinalRectangleKachiL);
  bool operator==(FinalRectangleKachiL);

  friend ostream& operator<<(ostream&, FinalRectangleKachiL);

  void print();

private:
  FinalPointKachiL upperLeft;
  FinalPointKachiL lowerRight;
  FinalFractionKachiL len;
  FinalFractionKachiL wid;
};
#endif


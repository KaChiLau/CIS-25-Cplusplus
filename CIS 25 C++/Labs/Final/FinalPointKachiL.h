/**
 *File name: FinalPointKachiL.h
 *Written by: KachiLau
 *Discussion:    Declaration File --
 *                 FinalPointKachiL Class 
 */

#ifndef FINALFINALPOINTKACHIL_H
#define FINALFINALPOINTKACHIL_H
#include "FinalFractionKachiL.h"
#include <iostream>
using namespace std;

class FinalPointKachiL {
public:
  FinalPointKachiL(); 
  FinalPointKachiL(const FinalFractionKachiL&);
  FinalPointKachiL(const FinalFractionKachiL&, const FinalFractionKachiL&);
  FinalPointKachiL(const FinalPointKachiL&);
  ~FinalPointKachiL();

  FinalPointKachiL(ostream&);

  FinalFractionKachiL getX() const;
  FinalFractionKachiL getY() const;
  void setX(const FinalFractionKachiL&);
  void setY(const FinalFractionKachiL&);

  void moveBy(const FinalFractionKachiL& , const FinalFractionKachiL&);
  void moveBy(int); 
  void flipByX(); 
  void flipByY();
  void flipThroughOrigin();
  void print();

  FinalPointKachiL& operator=(const FinalPointKachiL&);
  friend ostream& operator<<(ostream& out, const FinalPointKachiL& arg);

private:
  FinalFractionKachiL x;
  FinalFractionKachiL y;
};
#endif

/*File name: FinalPointKachiL.cpp
 *Written by: KachiLau
 */

#include <iostream>
#include "FinalPointKachiL.h"
using namespace std;

FinalPointKachiL::FinalPointKachiL() {
  x = 0;
  y = 0;
}

FinalPointKachiL::FinalPointKachiL(const FinalFractionKachiL& arg) {
  x = 0;
  y = arg;
  y.reduceFraction();
}

FinalPointKachiL::FinalPointKachiL(const FinalFractionKachiL& arg1, const FinalFractionKachiL& arg2) {
  x = arg1;
  y = arg2;
  x.reduceFraction();
  y.reduceFraction();
}

FinalPointKachiL::FinalPointKachiL(const FinalPointKachiL& arg) {
  x = arg.x;
  y = arg.y;
}

FinalPointKachiL::~FinalPointKachiL() {
}

FinalFractionKachiL FinalPointKachiL::getX() const {
  return x;
}

FinalFractionKachiL FinalPointKachiL::getY() const {
  return y;
}

void FinalPointKachiL::setX(const FinalFractionKachiL& arg) {
  x = arg;
  x.reduceFraction();
  return;
}

void FinalPointKachiL::setY(const FinalFractionKachiL& arg) {
  y = arg;
  y.reduceFraction();
  return;
}

void FinalPointKachiL::moveBy(const FinalFractionKachiL& delX, const FinalFractionKachiL& delY) {
  x = x + delX;
  y = y + delY;
  x.reduceFraction();
  y.reduceFraction();
  return;
}

void FinalPointKachiL::moveBy(int iOld) {
  x = x + iOld;
  y = y + iOld;
  x.reduceFraction();
  y.reduceFraction();
  return;
}

void FinalPointKachiL::flipByX() {
  y = y * (-1);
  y.reduceFraction();
  return;
}

void FinalPointKachiL::flipByY() {
  x = x * (-1);
  x.reduceFraction();
  return;
}

void FinalPointKachiL::flipThroughOrigin() {
  x = x * (-1);
  y = y * (-1);
  x.reduceFraction();
  y.reduceFraction();
  return;
}

FinalPointKachiL& FinalPointKachiL::operator=(const FinalPointKachiL& arg) {
  this->x = arg.x;
  this->y = arg.y;
  return *this;
}

ostream& operator<<(ostream& out, const FinalPointKachiL& arg) {
  out << "(" << arg.x << ", " << arg.y << ")";
  return out;
}




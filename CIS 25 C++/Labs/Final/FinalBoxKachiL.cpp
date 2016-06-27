/*file name: FinalBoxKachiL.cpp
 *written by: KachiL
 */

#include <iostream>
#include "FinalBoxKachiL.h"
using namespace std;

FinalBoxKachiL::FinalBoxKachiL() {
  heigth = 1;
}

FinalBoxKachiL::FinalBoxKachiL(const FinalFractionKachiL& arg) {
  heigth = arg;
}

FinalBoxKachiL::FinalBoxKachiL(const FinalFractionKachiL& len, const FinalFractionKachiL& wid, const FinalFractionKachiL& arg) {
  FinalRectangleKachiL::setLen(len);
  FinalRectangleKachiL::setWid(wid);
  heigth = arg;
}

FinalBoxKachiL::FinalBoxKachiL(const FinalRectangleKachiL arg, const FinalFractionKachiL arg2) {
}

FinalBoxKachiL::FinalBoxKachiL(const FinalBoxKachiL& arg) {
  FinalRectangleKachiL::setLen(arg.getLen());
  FinalRectangleKachiL::setWid(arg.getWid());
  heigth = arg.heigth;
}

FinalBoxKachiL::~FinalBoxKachiL() {
}

void FinalBoxKachiL::setLen(const FinalFractionKachiL& arg) {
  FinalRectangleKachiL::setLen(arg);
  return;
}

void FinalBoxKachiL::setWid(const FinalFractionKachiL& arg) {
  FinalRectangleKachiL::setWid(arg);
  return;
}

void FinalBoxKachiL::setHeigth(const FinalFractionKachiL& arg) {
  heigth = arg;
  return;
}

FinalFractionKachiL FinalBoxKachiL::getLen() const {
  return (FinalRectangleKachiL::getLen());
}

FinalFractionKachiL FinalBoxKachiL::getWid() const {
  return (FinalRectangleKachiL::getWid());
}

FinalFractionKachiL FinalBoxKachiL::getHeigth() const {
  return heigth;
}

FinalFractionKachiL FinalBoxKachiL::getArea() {
  return (FinalRectangleKachiL::getArea() * 2 + (FinalRectangleKachiL::getLen() + FinalRectangleKachiL::getWid()) * 2 * heigth);
}

FinalFractionKachiL FinalBoxKachiL::getVolume() {
  return ( FinalRectangleKachiL::getArea() * heigth) ;
}

ostream& operator<<(ostream& out, FinalBoxKachiL arg) {
  out << "\tLength : " << arg.getLen()
	  << "\n\tWidth : " << arg.getWid()
	  << "\n\tHeigth : " << arg.heigth 
	  << "\n\tArea : " << arg.getArea()
	  << "\n\tVolume : " << arg.getVolume() << endl;
  return out;
}
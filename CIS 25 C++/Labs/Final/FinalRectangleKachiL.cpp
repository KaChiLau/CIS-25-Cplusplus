/**
 *File name: FinalRectangleKachiL.cpp
 *Written by: KachiLau
 *Discussion:    Declaration File --
 *                 FinalRectangleKachiL Class 
 */

#include "FinalFractionKachiL.h"
#include "FinalPointKachiL.h"
#include "FinalRectangleKachiL.h"
#include <iostream>
using namespace std;

FinalRectangleKachiL::FinalRectangleKachiL() {
  len = 1;
  wid = 1;
}

FinalRectangleKachiL::FinalRectangleKachiL(const FinalFractionKachiL& frLen, const FinalFractionKachiL& frWid) {
  upperLeft.setX(0);
  upperLeft.setY(0); 
  len = frLen;
  wid = frWid;
  if (len < 0)
	len = len * (-1);
  if (wid < 0)
	wid = wid * (-1);
}

FinalRectangleKachiL :: FinalRectangleKachiL(const FinalPointKachiL& point, const FinalFractionKachiL& frLen, const FinalFractionKachiL& frWid) {
  upperLeft = point;
  len = frLen;
  wid = frWid;
  if (len < 0)
	len = len * (-1);
  if (wid < 0)
	wid = wid * (-1);
  len.reduceFraction();
  wid.reduceFraction();
}

FinalRectangleKachiL::FinalRectangleKachiL(const FinalPointKachiL& point1, const FinalPointKachiL& point2) {
  upperLeft = point1;
  lowerRight = point2;
  len = lowerRight.getX() - upperLeft.getX();
  wid = lowerRight.getY() - upperLeft.getY();
  if (len.getNum() < 0)
	len = len * (-1);
  if (wid.getNum() < 0)
	wid = wid * (-1);
  len.reduceFraction();
  wid.reduceFraction();
}

FinalRectangleKachiL :: FinalRectangleKachiL(const FinalRectangleKachiL& arg) {
  upperLeft = arg.upperLeft;
  lowerRight = arg.lowerRight;
  len = arg.len;
  wid = arg.wid;
  wid.reduceFraction();
  wid.reduceFraction();
}
FinalRectangleKachiL :: ~FinalRectangleKachiL() {
}

void FinalRectangleKachiL :: compareByVolume(const FinalRectangleKachiL& rect2) {
  cout << "A rectangle has no volume." << endl;
  return;
}

FinalFractionKachiL FinalRectangleKachiL::getLen() const {
  return len;
}

FinalFractionKachiL FinalRectangleKachiL::getWid() const {
  return wid;
}

void FinalRectangleKachiL::setLen(const FinalFractionKachiL& arg) {
  len = arg;
  return;
}

void FinalRectangleKachiL::setWid(const FinalFractionKachiL& arg) {
  wid = arg;
}

FinalFractionKachiL FinalRectangleKachiL::getArea() {
  return ( FinalFractionKachiL(len * wid));
}

FinalFractionKachiL FinalRectangleKachiL::getVolume() {
  return FinalFractionKachiL(0);
}

bool FinalRectangleKachiL::operator<(FinalRectangleKachiL arg) {
   if (this->getArea() < arg.getArea())
	return true;
  else 
	return false;
}

bool FinalRectangleKachiL::operator>(FinalRectangleKachiL arg) {
  if (this->getArea() > arg.getArea())
	return true;
  else 
	return false;
}

bool FinalRectangleKachiL::operator==( FinalRectangleKachiL arg ) {
  if (this->getArea() == arg.getArea())
	return true;
  else 
	return false;
}

void FinalRectangleKachiL::print() {
  cout << "The rectangle information is --\n"
       << "\tUpperLeft point : " << upperLeft
       << "\n\tLowerRight point : " << lowerRight 
       << "\n\tLength : " << len
       << "\n\tWidth : " << wid <<  endl;
  return;
}

ostream& operator<<(ostream& out, FinalRectangleKachiL arg) {
   out << "\tUpperLeft point : " << arg.upperLeft
       << "\n\tLowerRight point : " << arg.lowerRight 
       << "\n\tLength : " << arg.len
       << "\n\tWidth : " << arg.wid
	   << "\n\tArea : " << arg.getArea() << endl;
  return out;
}
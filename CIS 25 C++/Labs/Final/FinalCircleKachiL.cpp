/**
 *File name: FinalCircleKachiL.cpp
 *Written by: Kachilau
 *Discussion:    Declaration File --
 *                 FinalCircleKachiL Class 
 */

#include "FinalFractionKachiL.h"
#include "FinalPointKachiL.h"
#include "FinalCircleKachiL.h"
#include <iostream>
FinalFractionKachiL PI(157, 50);

using namespace std;

FinalCircleKachiL::FinalCircleKachiL() {
  radius = 1;
}

FinalCircleKachiL::FinalCircleKachiL(const FinalFractionKachiL& arg) {
  radius = arg;
}

FinalCircleKachiL::FinalCircleKachiL(const FinalPointKachiL& point,const FinalFractionKachiL& arg) {
  center = point;
  radius = arg;
}

FinalCircleKachiL :: FinalCircleKachiL(const FinalCircleKachiL& arg) {
  center = arg.center;
  radius = arg.radius;
}

FinalCircleKachiL::~FinalCircleKachiL() {
}

FinalPointKachiL FinalCircleKachiL::getCenter() const {
  return center;
}

FinalFractionKachiL FinalCircleKachiL::getRadius() const {
  return radius;
}

void FinalCircleKachiL::setCenter(const FinalPointKachiL& point) {
  center = point;
  return;
}

void FinalCircleKachiL::setRadius(const FinalFractionKachiL& arg) {
  radius = arg;
  return;
}

FinalFractionKachiL FinalCircleKachiL::getArea() {
  return (PI * radius * radius);
}

FinalFractionKachiL FinalCircleKachiL::getPerimeter() {
  return (PI * radius * 2);
}

FinalFractionKachiL FinalCircleKachiL::getVolume() {
  return FinalFractionKachiL(0);
}

ostream& operator<<(ostream& out, FinalCircleKachiL arg) {
  out << "\tCenter : " << arg.center
	  << "\n\tRadius : " << arg.radius 
	  << "\n\tArea : " << arg.getArea() << endl;
  return out;
}


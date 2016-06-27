/*file name: FinalCylinderKachiL.cpp
 *written by: KachiL
 */

#include <iostream>
#include "FinalCylinderKachiL.h"
#include "FinalCircleKachiL.h"
using namespace std;

FinalCylinderKachiL::FinalCylinderKachiL() {
	heigth = 1;
}

FinalCylinderKachiL::FinalCylinderKachiL(const FinalFractionKachiL& arg) {
	heigth = arg;
}

FinalCylinderKachiL::FinalCylinderKachiL(const FinalFractionKachiL& arg1, const FinalFractionKachiL& arg2) {
	FinalCircleKachiL::setRadius(arg1);
	heigth = arg2;
}

FinalCylinderKachiL::FinalCylinderKachiL(const FinalPointKachiL& arg1, const FinalFractionKachiL& arg2, const FinalFractionKachiL& arg3) {
	FinalCircleKachiL::setCenter(arg1);
	FinalCircleKachiL::setRadius(arg2);
  heigth = arg3;
}

FinalCylinderKachiL::FinalCylinderKachiL(const FinalCylinderKachiL& arg) {
	FinalCircleKachiL::setCenter(arg.getCenter());
	FinalCircleKachiL::setRadius(arg.getRadius());
	heigth = arg.heigth;
}

FinalCylinderKachiL::FinalCylinderKachiL(const FinalCircleKachiL& arg, const FinalFractionKachiL& arg2) {
	
}

FinalCylinderKachiL::~FinalCylinderKachiL() {
}

FinalPointKachiL FinalCylinderKachiL::getCenter() const {
	return (FinalCircleKachiL::getCenter());
}

FinalFractionKachiL FinalCylinderKachiL::getRadius() const {
	return (FinalCircleKachiL::getRadius());
}

FinalFractionKachiL FinalCylinderKachiL::getHeigth() const {
	return heigth;
}

void FinalCylinderKachiL::setCenter(const FinalPointKachiL& arg) {
	FinalCircleKachiL::setCenter(arg);
	 return;
}

void FinalCylinderKachiL::setRadius(const FinalFractionKachiL& arg) {
	FinalCircleKachiL::setRadius(arg);
	return;
}

void FinalCylinderKachiL::setHeigth(const FinalFractionKachiL& arg) {
	heigth = arg;
	return;
}

FinalFractionKachiL FinalCylinderKachiL::getArea() {
	 return (FinalCircleKachiL::getArea() * 2 + FinalCircleKachiL::getPerimeter() * heigth);
}

FinalFractionKachiL FinalCylinderKachiL::getVolume() {
	return (FinalCircleKachiL::getArea() * heigth);
}

ostream& operator<<(ostream& out, FinalCylinderKachiL arg) {
	out << "\tCenter : " << arg.getCenter() 
		  << "\n\tRadius : " << arg.getRadius() 
		  << "\n\tHeigth : " << arg.heigth 
		  << "\n\tArea : " << arg.getArea()
		  << "\n\tVolume : " << arg.getVolume() << endl;
	return out;
}

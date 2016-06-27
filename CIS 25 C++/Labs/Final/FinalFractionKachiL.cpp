/*file name: FinalFractionKachiL.cpp
 *written by: Kachilau
 */

#include <iostream>
#include "FinalFractionKachiL.h"
using namespace std;

FinalFractionKachiL::FinalFractionKachiL() {
  num = 0;
  denom = 1;
}

FinalFractionKachiL::FinalFractionKachiL(int arg) {
  num = arg;
  denom = 1;
}

FinalFractionKachiL::FinalFractionKachiL(int arg1, int arg2) {
  num = arg1;
  if (arg2 < 0) {
    denom = -arg2;
    num = -num;
  }
  else if (arg2 == 0) {
    denom = 1;
  }
  else 
    denom = arg2;
}

FinalFractionKachiL::FinalFractionKachiL(const FinalFractionKachiL& arg) {
  num = arg.num;
  denom = arg.denom;
}

FinalFractionKachiL::~FinalFractionKachiL() {
}

int FinalFractionKachiL::getNum() const {
  return num;
}

int FinalFractionKachiL::getDenom() const {
  return denom;
}

void FinalFractionKachiL::setNum(const int arg) {
  num = arg;
  return;
}

void FinalFractionKachiL::setDenom(const int arg) {
  denom = arg;
  return;
}

void FinalFractionKachiL::reduceFraction() {
  while ( num % 2 == 0 && denom % 2 == 0 ) {
    num /= 2;
    denom /= 2;
  }

  for (int i = 3; i <= num || i <= denom; i += 2) {
    while (num % i == 0 && denom % i == 0) {
      num /= i;
      denom /= i;
    }
  }
  return;
}
  
FinalFractionKachiL FinalFractionKachiL::operator+(const FinalFractionKachiL& arg) {
  return FinalFractionKachiL(num * arg.denom + arg.num * denom, denom * arg.denom);
}

FinalFractionKachiL FinalFractionKachiL::operator+(int arg) {
  return FinalFractionKachiL(num + arg * denom, denom);
}

FinalFractionKachiL FinalFractionKachiL::operator-(const FinalFractionKachiL& arg) {
  return FinalFractionKachiL(num * arg.denom - arg.num * denom, denom * arg.denom);
}

FinalFractionKachiL FinalFractionKachiL::operator*(const FinalFractionKachiL& arg) {
  return FinalFractionKachiL(num * arg.num, denom * arg.denom);
}

FinalFractionKachiL FinalFractionKachiL::operator*(int arg) {
  return FinalFractionKachiL(num * arg, denom);
}

FinalFractionKachiL FinalFractionKachiL::operator/(const FinalFractionKachiL& arg) {
  return FinalFractionKachiL(num * arg.denom, denom * arg.num);
}

FinalFractionKachiL& FinalFractionKachiL::operator=(const FinalFractionKachiL& arg) {
  this->num = arg.num;
  this->denom = arg.denom;
  return *this;
}

FinalFractionKachiL& FinalFractionKachiL::operator=( int arg ) {
  this->num = arg;
  this->denom = 1;
  return *this;
}

bool FinalFractionKachiL::operator<(const FinalFractionKachiL& arg) {
  if ((num * arg.denom - arg.num * denom ) < 0)
	return true;
  else 
	return false;
}

bool FinalFractionKachiL :: operator<(int arg) {
  if ((num - arg * denom) < 0)
	return true;
  else 
	return false; 
}
  
bool FinalFractionKachiL::operator>(const FinalFractionKachiL& arg) {
  FinalFractionKachiL temp;
  temp = *this - arg;
  if (temp.num > 0)
	return true;
  else 
	return false;
}

bool FinalFractionKachiL::operator==(const FinalFractionKachiL& arg) {
  FinalFractionKachiL temp;
  temp = *this - arg;
  if (temp.num == 0)
	return true;
  else
	return false;
}

ostream& operator<<(ostream& out, const FinalFractionKachiL& arg) {
  FinalFractionKachiL reduce(arg);
  reduce.reduceFraction();
  if (reduce.denom == 1) {
	out << reduce.num;
  } else {
	out << reduce.num << "/" << reduce.denom;
  }
  return out;
}








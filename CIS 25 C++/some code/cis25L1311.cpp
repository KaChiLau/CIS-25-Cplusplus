//Program Name : cis25L1311.cpp
//Discussion :   Base Pointers

#include <iostream>
using namespace std;

class B {
public:
  B() {
    x = 0;
  }
  void setX(int a) {
    x = a;
  }
  int getX() {
    return x;
  }
private:
  int x;
};

class D : public B {
public:
  D() {
    y = 0;
  }
  void setY(int a) {
    y = a;
  }
  int getY() {
    return y;
  }
private:
  int y;
};

int main() {
  B bObj;
  B* bPtr;
  D dObj;

  bPtr = &bObj;
  bPtr->setX(5);
  cout << "\nBase object : bObj "
       << "\n\tx : " << bPtr->getX() << endl;

  bPtr = &dObj;
  bPtr->setX(15);
  dObj.setY(25);
  cout << "\nDerived object : dObj "
       << "\n\tx : " << bPtr->getX()
       << "\n\ty : " << dObj.getY() << endl;

  return 0;
}

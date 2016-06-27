 /**
 *Program Name: cis25Fall2012FranciscoAguilarLab4Ex1
 *Discusion:    Lab #4 Exercise 1.
 *Author:       Francisco Aguilar 
 *Date:         10/11/2012
 */

#include <iostream>      // is a class mechanist 
 using namespace std;

 class FractionFranciscoA {
 private:
	 int num;
	 int denom;

 public:

	 void storeInfo(int n, int d);

	 FractionFranciscoA()  {
		 num = 0;
		 denom = 1;
	//	 cout << "usando default constructor\n";
	 }

	 FractionFranciscoA(const FractionFranciscoA& copyC)  { //copy constructor
		 num = copyC.num;
		 denom = copyC.denom;
	    // cout << "usando copy constructor\n";
	 }

	 FractionFranciscoA(int arg) {
           num = arg;
		   if (arg){
			denom = arg;
		}
		else {
			denom = 1;
		}	
		  // cout << "usando convert constructor\n";
	 }


	 void setNum(int value){ // mutator
		num = value;
		return;
	}

	 void setDenom(int value) {  // mutator
		if (value != 0)
		denom = value;
		else 
			denom = 1;
	}

	 int getNum() const { //  accesor  
		 
		 return num;
	}

	 int getDenom() const {

		return denom;
	}

	int print()  { 
		cout << "fraction numerato : " << num <<endl;
		cout << "fraction Denomina : " << denom << endl;
		return print();
	}

	int gcd(int denom1, int denom2) {

	 if (denom1 % denom2 == 0) 
		 return denom2;
	 else
		 return gcd(denom2, denom1 % denom2);
	}

	void simpli() {
		int a = getNum();
		int b = getDenom();
		int gc = gcd(a, b);
		a /= gc;
		b /= gc;

		if (b < 0) {
			a = -a;
			b = -b;
		}
	}
 };
  
  void FractionFranciscoA::storeInfo(int n, int d) {
		 num = n;
		 denom = d;
	 }
  void menu();
  FractionFranciscoA init();
  void print(const FractionFranciscoA&);
  FractionFranciscoA add(FractionFranciscoA, FractionFranciscoA);
  FractionFranciscoA subtract(FractionFranciscoA, FractionFranciscoA);
  FractionFranciscoA multiply(FractionFranciscoA, FractionFranciscoA);
  FractionFranciscoA divide(FractionFranciscoA, FractionFranciscoA);
  int gcd(int, int);
  
  int main() {
	  FractionFranciscoA c;
	  FractionFranciscoA a; 
	  FractionFranciscoA b(a);
	   b = init();
	   c = add(a,b);
     	 print(c);
	 return 0;
  }

  
  
  FractionFranciscoA init() {
	 int num;
	 int denom;
	 FractionFranciscoA info;

	 cout << "enter numerator :";
	 cin >> num;
	 cout << "enter Demominator :";
	 cin >> denom;

	 info.storeInfo(num, denom);
	 return info;

 }

 void print(const FractionFranciscoA &info)  { 
		
	  cout << "fraction numerato : " << info.getNum() <<endl;
	  cout << "fraction Denomina : " << info.getDenom() << endl;
	  return;
 }

 int gcd(int denom1, int denom2) {

	 if (denom1 % denom2 == 0) 
		 return denom2;
	 else
		 return gcd(denom2, denom1 % denom2);
 }
 
 FractionFranciscoA add(FractionFranciscoA frac1, FractionFranciscoA frac2)  {
 
	 FractionFranciscoA& temp = init();
	 frac1 = temp;
	// temp.gcd(frac1.getDenom(), frac2.getDenom());
	 temp.setNum(frac1.getNum() * frac2.getDenom() + frac2.getNum() * frac1.getDenom());
	 temp.setDenom(frac1.getDenom() * frac2.getDenom());
	 temp.simpli();
	 return temp;
 }

 FractionFranciscoA subtract(FractionFranciscoA frac1 ,FractionFranciscoA frac2) {

	 FractionFranciscoA& temp = init();
	 frac1 = temp;

	 temp.setNum(frac1.getNum() * frac2.getDenom() - frac2.getNum() * frac1.getDenom());
	 temp.setDenom(frac1.getDenom() * frac2.getDenom());

	 return temp;
 }

  FractionFranciscoA multiply(FractionFranciscoA frac1, FractionFranciscoA frac2) {

	  FractionFranciscoA& temp = init();
	  frac1 = temp;

	  temp.setNum(frac1.getNum() * frac2.getNum());
	  temp.setDenom(frac1.getDenom() * frac2.getDenom());

	  return temp;
  }

  FractionFranciscoA divide(FractionFranciscoA frac1, FractionFranciscoA frac2) {
	  FractionFranciscoA& temp = init();
	  frac1 = temp;

	  temp.setNum(frac1.getNum() * frac2.getDenom());
	  temp.setDenom(frac1.getDenom() * frac2.getDenom());

	  return temp; 
  }
	
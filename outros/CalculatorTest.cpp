//Calculator.cpp

#include<iostream>
#include "Calculator.h"

using namespace std;

int main(int argc, char** argv)
{
	Calculator myCalc;  //stack-based Calculator
	
	myCalc.setAllowNegatives(true);
	int result = myCalc.add(2,2);
	cout << "According to the Calculator, 2+2 = " <<result<<endl;
	
	Calculator*myCalc2; //heap-based Calculator
	
	myCalc2 = new Calculator(); //allocate a new object
	myCalc2->setAllowNegatives(false);
	float result2 = myCalc2->divide(2.5, 0.5);
	cout <<"According to the calculator, 2.5/0.5 = "<<result2<<endl;
	
	return 0;
}

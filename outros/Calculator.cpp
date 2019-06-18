//Calculator.cpp

#include<iostream>
#include "Calculator.h"

Calculator::Calculator()
{
	fAllowNegatives = false;  //initialize the data member
}

Calculator::~Calculator()
{
	//nothing much to do in terms of cleanup
}

int Calculator::add(int num1, int num2)
{
	if(!getAllowNegatives() && (num1 < 0 || num2 < 0))
	{
		std::cout << "Illegal negative number passed to add()" << std::endl;
		return 0;
	}
	return num1 + num2;
}

float Calculator::divide(float numerator, float denominator)
{
	if(!getAllowNegatives() && (numerator<0 || denominator < 0))
	{
		std::cout << "Illegal negative number passed to divide()" << std::endl;
		return 0;
	}
	return (numerator / denominator);
}

bool Calculator::getAllowNegatives()
{
	return fAllowNegatives;
}

void Calculator::setAllowNegatives(bool inValue)
{
	fAllowNegatives = inValue;
}

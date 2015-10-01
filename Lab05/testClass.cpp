#include<iostream>
#include "testClass.h"

testClass::testClass()
{
	testClass::x = 0;
	testClass::y = 0;
}

testClass::testClass(int a, int b)
{
	testClass::x = a;
	testClass::y = b;
}

int testClass::sum()
{
	return testClass::x + testClass::y;	
}

void testClass::print() const
{
	std::cout << testClass::x << " ";
	std::cout << testClass::y << std::endl;
}

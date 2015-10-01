#include "testClass.h"
#include <iostream>

int main()
{
	testClass::testClass test;
	int a = test.sum();
	std::cout << a << " ";
	test.print();
	
	testClass::testClass test_two (1, 2);
	int b = test_two.sum();
	std::cout << b << " ";
	test.print();


}
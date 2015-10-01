#include<iostream>
#include "smallestIndex.h"

void testIndex(int, int);

int main()
{
	int test_array_one[] = {10, 20, 30, 1, 40, 60, 5};
	int correct_one = 3;
	int length = sizeof(test_array_one) / sizeof(int);
	int index = smallestIndex(test_array_one, length);
	testIndex(index, correct_one);
	
	int test_array_two[] = {56, 34, 67, 54, 23, 87, 66, 92, 15, 32, 55, 54, 88, 22, 30};
	int correct_two = 8;
	length = sizeof(test_array_two)/sizeof(int);
	index = smallestIndex(test_array_two, length);
	testIndex(index, correct_two);
	
	return 0;
}

void testIndex(int index, int correct)
{
	if (index == correct)
	{
		std::cout << "Test Passed" << std::endl;
	}
	else
	{
		std::cout << "Test Failed" << std::endl;
	}
}
#include "smallestIndex.h"

int smallestIndex(int * int_array, int length)
{
	int smallest = int_array[0];
	int smallest_index = 0;
	for (int i = 0; i < length; i++)
	{
		if (int_array[i] < smallest)
		{
			smallest_index = i;
			smallest = int_array[i];
		}
	}
	return smallest_index;
}



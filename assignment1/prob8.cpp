#include<iostream>

using namespace std;

int main()
{
	int i = 0, value = 0;
	
	for (i = 0; i <= 20; i ++)
	{
		if (i % 2 == 0 && i <= 10)
			value = value + i * i;
		else if (i % 2 == 0 && i > 10)
			value = value + i;
		else
			value = value - i;
	}
	cout << "value = " << value << endl;
	return 0;
}
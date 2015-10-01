#include<iostream>

using namespace std;

int main()
{
	//a
	//b << Arrays are automatically initialized with all 0s
	int alpha[10][20];
	
	//c
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			if (i == 0)
			{
				alpha[i][j] = 1;
			}
			else
			{
				alpha[i][j] = 2;
			}
		}
	}
	
	//d
	int value = 5;
	for (int j = 0; j < 20; j++)
	{
		for (int i = 0; i < 10; i++)
		{
			alpha[i][j] = value;
		}
		value = value * 2;
	}
	
	//e
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 20; j++)
		{
			cout << alpha[i][j] << " ";
		}
		cout << endl;
	}
	
	//f
	for (int j = 0; j < 20; j++)
	{
		for (int i = 0; i < 10; i++)
		{
			cout << alpha[i][j] << " ";
		}
		cout << endl;
	}
}
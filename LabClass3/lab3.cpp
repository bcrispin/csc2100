#include<iostream>
#include<math.h>
#include<array>

using namespace std;

double * get_input();
double get_mean(double * numbers, int length);
double get_std(double mean, double * numbers, int length);

int main()
{
	double *input = get_input();
	double (&numbers) [5] = (double(&) [5]) * input;
	
	int length = sizeof(numbers) / sizeof(double);
	
	double mean = get_mean(numbers, length);
	double standard_dev = get_std(mean, numbers, length);
	
	cout << "Mean: " << mean << endl;
	cout << "Standard Deviation: " << standard_dev << endl;
	return 0;
}

double * get_input()
{
	static double input[5];

	cout << "Please enter 5 numbers..." << endl;
	for (int i = 0; i < 5; i++)
	{
		cin >> input[i];
	}

	return input;
}

double get_mean(double * numbers, int length)
{
	double mean, total = 0;
	for (int i = 0; i < length; i++)
	{
		total += numbers[i];
	}

	mean = total / length;
	return mean;
}

double get_std(double mean, double * numbers, int length)
{
	double standard_dev, subtotal = 0;

	for (int i = 0; i < length; i++)
	{

		subtotal += (numbers[i] - mean) * (numbers[i] - mean);
	}
	standard_dev = sqrt(subtotal/length);
	
	return standard_dev;
}
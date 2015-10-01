#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main()
{
	int count = 0;
	int sum = 0;
	
	while (count <= 8)
	{
		sum = sum + static_cast<int>(sqrt(count));
		cout << sum << endl;
		count ++;
	}
	cout << sum << endl;
	
}
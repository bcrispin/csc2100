#include<iostream>

using namespace std;

int main()
{
	enum courses {MATH, SCIENCE, HISTORY};
	courses course = SCIENCE;
	
	switch (course)
	{
	case MATH:
	cout << "Math";
	break;
	case SCIENCE:
	cout << "Science";
	break;			
	case HISTORY:
	cout << "History";	
	break;	
	}
	cout << endl;
	
	
	return 0;
}
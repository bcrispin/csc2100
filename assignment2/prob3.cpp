#include<iostream>

using namespace std;

int main()
{
	//a
	enum birdType {PEACOCK, SPARROW, CANARY, PARROT,
	 PENGUIN, OSTRICH, EAGLE, CARDINAL, HUMMINGBIRD};
	//b
	birdType bird;
	//c
	bird = CANARY;
	//d
	bird = static_cast<birdType>(static_cast<int>(bird) + 1);
	//e
	bird = static_cast<birdType>(static_cast<int>(bird) - 1);
	
	//f
	switch (bird)
	{
	case PEACOCK:
	cout << "PEACOCK" << endl;
	break;
	case SPARROW:
	cout << "SPARROW" << endl;
	break;
	case CANARY:
	cout << "CANARY" << endl;
	break;
	case PARROT:
	cout << "PARROT" << endl;
	break;
	case PENGUIN:
	cout << "PENGUIN" << endl;
	break;
	case OSTRICH:
	cout << "OSTRICH" << endl;	
	break;
	case EAGLE:
	cout << "EAGLE" << endl;
	break;
	case CARDINAL:
	cout << "CARDINAL" << endl;
	break;
	case HUMMINGBIRD:
	cout << "HUMMINGBIRD" << endl;
	}
	//f
	string input;
	cout << "Please input a bird name: " << endl;
	getline(cin, input);
	if (input == "PEACOCK")
	bird = PEACOCK;
	else if(input == "SPARROW")
	bird = SPARROW;
	else if(input == "CANARY")
	bird = CANARY;
	else if(input == "PARROT")
	bird = PARROT;
	else if(input == "PENGUIN")
	bird = PENGUIN;
	else if(input == "OSTRICH")
	bird = OSTRICH;
	else if(input == "EAGLE")
	bird = EAGLE;
	else if(input == "CARDINAL")
	bird = CARDINAL;
	else if(input == "HUMMINGBIRD")
	bird = HUMMINGBIRD 
	
}
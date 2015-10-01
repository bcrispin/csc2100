#include<iostream>
#include<string>

using namespace std;

string substr(string input);
bool is_vowel(char letter);

int main()
{
	string input;
	cout << "Please enter a string: ";
	cin >> input;
	cout << substr(input);
	return 0;
}

string substr(string input)
{
	int length = input.length();
	char output[length];
	for (int i = 0, j=0; i<length; i++)
	{
		if (!is_vowel(input[i]))
		{
			output[j] = input[i];
			j++;
		}
	}
	return output;
}


bool is_vowel(char letter)
{
	char ul = toupper(letter);
	if (ul=='A'||ul=='E'||ul=='I'||ul=='O'||ul=='u')
	{
		return true;
	}
	else
	{
		return false;
	}
}

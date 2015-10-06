#include "bookType.h"
#include<fstream>

#define DEFAULT_FILENAME "input.txt"
#define INPUT_LENGTH 10

int main()
{
	std::ifstream file;
	file.open(DEFAULT_FILENAME);
	bookType bookTypeArray[INPUT_LENGTH]; 
	if (file.is_open())
	{
		std::string title;
		float price;
		int i = 0;
		while ((file >> title >> price) && (i < INPUT_LENGTH))
		{
			bookTypeArray[i].setTitle(title);
			bookTypeArray[i].setPrice(price);
			++i;
		}
	}
	file.close();
	for (int j = 0; j < 10; j++)
	{
		bookTypeArray[j].printTitle();
		bookTypeArray[j].printPrice();
	}
	
}
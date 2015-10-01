#include "memberType.h"
#include "randomName.h"
#include <string>
#include <assert.h>

const float BOOK_PRICE=5;
const  int TOTAL_BOOKS=100;
const int MORE_BOOKS=10;
const int NUMBER_OF_MEMBERS=10;

int main()
{
	memberType::memberType memberArray [NUMBER_OF_MEMBERS];
	for (int i =0; i < NUMBER_OF_MEMBERS; i++)
	{
		std::string name = randomName();
		long id = i;
		int booksPurchased = rand() % TOTAL_BOOKS;
		double amountSpent = booksPurchased * BOOK_PRICE;
		memberArray[i] = memberType::memberType (name, id, booksPurchased, amountSpent);
		
		assert(name==memberArray[i].getName());
		assert(id==memberArray[i].getId());
		assert(booksPurchased==memberArray[i].getBooksPurchased());
		assert(amountSpent==memberArray[i].getAmountSpent());

		memberArray[i].printName();
		memberArray[i].printId();
		memberArray[i].printBooksPurchased();
		memberArray[i].printAmountSpent();
		
		std::string nameTwo = randomName();
		int booksPurchasedTwo = booksPurchased + MORE_BOOKS;
		int amountSpentTwo = booksPurchasedTwo * BOOK_PRICE;
		
		memberArray[i].setName(nameTwo);
		memberArray[i].setBooksPurchased(booksPurchasedTwo);
		memberArray[i].setAmountSpent(amountSpentTwo);
		
		assert(nameTwo==memberArray[i].getName());
		assert(id==memberArray[i].getId());
		assert(booksPurchasedTwo==memberArray[i].getBooksPurchased());
		assert(amountSpentTwo==memberArray[i].getAmountSpent());
	}
	return 0;
}


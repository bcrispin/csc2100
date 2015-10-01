#include "memberType.h"
#include <iostream>
#include <string>
#include <iomanip>

memberType::memberType()
{
	memberType::name = "";
	memberType::id = 0L;
	memberType::booksPurchased = 0;
	memberType::amountSpent = 0.00;
}

memberType::memberType(std::string name, long id, int booksPurchased, double amountSpent)
{
	memberType::name = name;
	memberType::id = id;
	memberType::booksPurchased = booksPurchased;
	memberType::amountSpent = amountSpent;
}

void memberType::setName(std::string name)
{
	memberType::name = name;
}

std::string memberType::getName()
{
	return memberType::name;
}

void memberType::printName()
{
	std::cout << "Name: " << memberType::name << std::endl;
}

void memberType::setId(long id)
{
	memberType::id = id;
}

long memberType::getId()
{
	return memberType::id;
}

void memberType::printId()
{
	std::cout << "Member ID: " << memberType::id << std::endl;
}
void memberType::setBooksPurchased(int booksPurchased)
{
	memberType::booksPurchased = booksPurchased;
}

int memberType::getBooksPurchased()
{
	return memberType::booksPurchased;
}

void memberType::printBooksPurchased()
{
	std::cout << "Books Purchased: " << memberType::booksPurchased << std::endl;
}

void memberType::setAmountSpent(double amountSpent)
{
	memberType::amountSpent = amountSpent;
}

double memberType::getAmountSpent()
{
	return memberType::amountSpent;
}

void memberType::printAmountSpent()
{
	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Amount Spent: " << memberType::amountSpent << std::endl;
}
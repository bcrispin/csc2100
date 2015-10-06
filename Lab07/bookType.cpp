#include<iostream>
#include "bookType.h"

bookType::bookType()
{
	bookType::title = "";
	bookType::price = 0.00;
}

bookType::bookType(std::string title, float price)
{
	bookType::title = title;
	bookType::price = price;
}

std::string bookType::getTitle()
{
	return bookType::title;
}

void bookType::setTitle(std::string title)
{
	bookType::title = title;
}

void bookType::printTitle()
{
	std::cout << bookType::title << std::endl;
}

float bookType::getPrice()
{
	return bookType::price;
}

void bookType::setPrice(float price)
{
	bookType::price = price;
}

void bookType::printPrice()
{
	std::cout << bookType::price << std::endl;
}
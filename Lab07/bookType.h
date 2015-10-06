#include<string>
class bookType
{
	private:
	std::string title;
	float price;
	
	public:
	bookType();
	bookType(std::string, float);
	std::string getTitle();
	void setTitle(std::string title);
	void printTitle();
	float getPrice();
	void setPrice(float price);
	void printPrice();
};
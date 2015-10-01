#include <string>
class memberType
{
	public:
	memberType();
	memberType(std::string, long, int, double);
	void setName(std::string);
	std::string getName();
	void printName();
	long getId();
	void setId(long);
	void printId();
	int getBooksPurchased();
	void setBooksPurchased(int);
	void printBooksPurchased();
	double getAmountSpent();
	void setAmountSpent(double);
	void printAmountSpent();
	
	private:
	std::string name;
	long id;
	int booksPurchased;
	double amountSpent;
};

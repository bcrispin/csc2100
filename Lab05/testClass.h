#ifndef ADD_H
#define ADD_H
class testClass
{
	public:
	testClass();
	testClass(int a, int b);
	int sum();
	void print() const;

	private:
	int x;
	int y;
};
#endif
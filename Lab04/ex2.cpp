#include<iostream>
#include<math.h>
#include<iomanip>

#define PI 3.1416

using namespace std;

double get_distance(double x1, double y1, double x2, double y2);
double get_radius(double x1, double y1, double x2, double y2);
double get_circumference(double radius);
double get_area(double radius);
double get_diameter(double radius);

int main()
{
	double x1, x2, y1, y2;
	double radius, diameter, circumference, area;
	cout << "Please enter the coordinates for the center of the circle." << endl;
	cout << "x: ";
	cin >> x1;
	cout << "y: ";
	cin >> y1;
	
	cout << "Please enter the coordinates for a point on the circle." << endl;
	cout << "x: ";
	cin >> x2;
	cout << "y: ";
	cin >> y2;
	
	radius = get_radius(x1, y1, x2, y2);
	diameter = get_diameter(radius);
	circumference = get_circumference(radius);
	area = get_area(radius);
	
	cout << fixed << setprecision(2);
	cout << "Radius: " << radius << endl;
	cout << "Diameter: " << diameter << endl;
	cout << "Circumference: " << circumference << endl;
	cout << "Area: " << area << endl;
	
	return 0;
}

double get_distance(double x1, double y1, double x2, double y2)
{
	double diff_x = pow((x2-x1), 2);
	double diff_y = pow((y2-y1), 2);
	double d = sqrt(diff_x + diff_y);
	
	return d;
}

double get_radius(double x1, double y1, double x2, double y2)
{
	double r = get_distance(x1, y1, x2, y2);
	return r;
}

double get_circumference(double radius)
{
	double c = 2 * PI * radius;
	return c;
}

double get_area(double radius)
{
	double a = PI * pow(radius, 2);
	return a;
}

double get_diameter(double radius)
{
	return radius * 2;
}
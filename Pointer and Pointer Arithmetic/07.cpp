#include<iostream>
#include<stdlib.h>
#define PI 3.14
using namespace std;

void circle(float, float*, float*);

void main(void)
{
	float radius, area, circumference;

	cout << "Enter radius of circle: " << endl;
	cin >> radius;

	circle(radius, &area, &circumference);

	cout << "Area is " << area << endl;
	cout << "Circumference is " << circumference << endl;
}

void circle(float r, float* a, float* f)
{
	*a = PI * r * r;
	*f = 2 * PI * r;
}
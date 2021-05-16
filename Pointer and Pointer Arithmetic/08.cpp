#include<iostream>
#include<stdlib.h>

using namespace std;

int* function();
int* functionTwo();

void main(void)
{
	int* p;

	p = function();

	for (int i = 0; i < 5; i++)
	{
		cout << *(p + i) << "  ";
	}
	cout << endl << endl;
	p = functionTwo();

	for (int i = 0; i < 5; i++)
	{
		cout << *(p + i) << "  ";
	}

}

int* function()
{
	int a[5];

	for (int i = 0; i < 5; i++)
	{
		a[i] = i * i;
	}

	return a;
}

int* functionTwo()
{
	static int a[5];

	for (int i = 0; i < 5; i++)
	{
		a[i] = i * i;
	}

	return a;
}

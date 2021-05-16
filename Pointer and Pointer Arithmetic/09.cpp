#include<iostream>
#include<stdlib.h>

using namespace std;

int* function();

void main(void)
{
	int* p;

	p = function();

	*p = 41;

	for (int i = 0; i < 5; i++)
	{
		cout << *(p - i) << "  ";
	}

	cout << endl << endl;
}

int* function()
{
	static int a[5];

	for (int i = 0; i < 5; i++)
	{
		a[i] = i * i;
	}

	return &a[4];
}
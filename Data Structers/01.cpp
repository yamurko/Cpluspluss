#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	typedef struct Simple
	{
		int i;
		char c;
		float f;
	}Simple;

	Simple k[2];

	for (int i = 0; i < 2; i++)
	{
		cout << "Enter an integer number: ";
		cin >> k[i].i;
		cout << "Enter a character: ";
		cin >> k[i].c;
		cout << "Enter a float number: ";
		cin >> k[i].f;
	}

	for (int i = 0; i < 2; i++)
	{
		cout << k[i].i << endl;
		cout << k[i].c << endl;
		cout << k[i].f << endl;
	}

	Simple a;

	cout << "Address of i = " << &a.i << endl;
	cout << "Address of c = " << (void*)&a.c << endl;
	cout << "Address of f = " << &a.f << endl;
	cout << "Size of a = " << sizeof(a) << endl;

	system("pause");
	return 0;
}
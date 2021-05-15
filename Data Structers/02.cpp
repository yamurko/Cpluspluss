#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	typedef union Same
	{
		char a;
		char b;
	}Same;

	Same k;
	char* ptr1, * ptr2;

	k.a = 'a';
	ptr1 = &k.a;

	cout << "Value of a: " << k.a << endl;
	cout << "Value of b: " << k.b << endl;
	cout << "Addres of a: " << (void*)ptr1 << endl;

	k.b = 'b';
	ptr2 = &k.b;

	cout << "Value of a: " << k.a << endl;
	cout << "Value of b: " << k.b << endl;
	cout << "Addres of b: " << (void*)ptr2 << endl;

	cout << endl << endl;
	system("pause");
	return 0;
}
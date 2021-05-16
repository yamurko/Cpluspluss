#include<iostream>
#include<stdlib.h>

using namespace std;

void main(void)
{
	int a[10], * p1, * p2;

	for (int i = 0; i < 10; i++)
	{
		a[i] = i * i;
		cout << "a[" << i << "]: " << a[i] << endl;
	}

	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << "a[" << i << "]: " << &a[i] << endl;

	}

	p1 = a;//pi = &a[0];
	*p1 = 10;
	p1 = &a[6];
	*p1 = 12;

	for (int i = 0; i < 10; i++)
	{
		cout << "a[" << i << "]: " << a[i] << endl;
	}

	cout << endl;

	p1 = a;

	for (int i = 0; i < 10; i++)
	{
		cout << "a[" << i << "]: " << *(p1 + i) << endl;
	}

	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		p1 = &a[i];
		cout << "a[" << i << "]: " << *(p1) << endl;
	}

	cout << endl;

	p1 = a;
	p2 = p1;

	for (int i = 0; i < 10; i++)
	{
		cout << "a[" << i << "]: " << *(p2 + i) << endl;
	}

	cout << endl;

	*p2 = 23;

	for (int i = 0; i < 10; i++)
	{
		cout << "a[" << i << "]: " << *(p2 + i) << endl;
		cout << "p1: " << *p1 << endl;
		cout << "p2: " << *p2 << endl;
	}

	system("pause");
}
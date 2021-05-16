#include<iostream>
#include<stdlib.h>

using namespace std;

int *reverse(int*, int);
int* reverseTwo(int*, int);

void main(void)
{
	int b[5] = { 0,1,4,9,16 };
	int *r = reverse(b, 5);
	int* k = reverseTwo(b, 5);

	for (int i = 0; i < 5; i++)
	{
		cout << *(r + i) << "  ";
	}

	cout << endl << endl;

	for (int i = 0; i < 5; i++)
	{
		cout << *(k+ i) << "  ";
	}
}

int *reverse(int *p, int s)
{
	static int a[5];

	for (int i = s-1; i >= 0; i--)
	{
		a[s - i - 1] = *(p + i);
	}

	return a;
}

int* reverseTwo(int *p, int s)
{
	static int a[5];

	for (int i = 0; i < 5; i++)
	{
		a[i] = *(p + i);
	}

	return a;
}
/* swaps the contents of 2 pointers */

#include<iostream>
#include<stdlib.h>

using namespace std;

void swap(int** a, int** b)
{
	int* tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
} /* end-swap */

void main(void)
{
	int x = 3, y = 2;
	int* p1 = &x, * p2 = &y;

	cout << "x:" << x << " y:" << y << endl;
	cout << "p1:" << *p1 << " &p1:" << p1 << " p2:" << *p2 << " &p2:" << p2 << endl << endl;

	swap(&p1, &p2);

	cout << "x:" << x << " y:" << y << endl;
	cout << "p1:" << *p1 << " &p1:" << p1 << " p2:" << *p2 << " &p2:" << p2 << endl;

} /* end-main */
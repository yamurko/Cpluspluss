#include<iostream>
#include<stdlib.h>

using namespace std;

int Add(int x, int y) { return x + y; }
int Subtract(int x, int y) { return x - y; }
int Multiply(int x, int y) { return x * y; }

void main(void)
{
	/*fptr is a function pointer to functions with prototype F(int, int)*/
	int (*fptr)(int, int);
	int x;

	fptr = Add;
	x = fptr(3, 2);

	cout << "fptr:" << fptr << " add:" << Add << " x:" << x << endl << endl;

	fptr = Subtract;
	x = fptr(3, 2);

	cout << "fptr:" << fptr << " subtract:" << Subtract << " x:" << x << endl << endl;

	fptr = Multiply;
	x = fptr(3, 2);

	cout << "fptr:" << fptr << " multiply:" << Multiply << " x:" << x << endl << endl;

} /* end-main */
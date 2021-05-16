#include<iostream>
#include<stdlib.h>
#include<ctime>

using namespace std;

int arraySum(int[], int);
const int SIZE_ARRAY = 20;

void main(void)
{
	int a[SIZE_ARRAY];
	int n, sum;

	cout << "Enter size of array: " << endl;
	cin >> n;

	srand(time(0));

	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
	}

	sum = arraySum(a, n);

	cout << "Sum of array: " << sum << endl;

}

int arraySum(int a[], int n)
{
	int* p, sum = 0;

	for (p = a; p < &a[n]; p++)
	{
		sum += *p;
	}

	return sum;
}
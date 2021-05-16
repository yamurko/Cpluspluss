#include<iostream>
#include<stdlib.h>

using namespace std;

int pw(int s, int r);
void armstrong(int* ptr);

int main()
{
	int number;

	cout << "Enter an integer number: ";
	cin >> number;

	armstrong(&number);

	system("pause");
	return 0;
}

int pw(int s, int r)
{
	while (s >= 1)
	{
		s /= 10;
		r++;
	}

	return r;
}

void armstrong(int* ptr)
{
	int a, digit = 0, b, sum = 0, c, power, temp;
	a = *ptr;
	c = a;
	power = pw(c, digit);
	while (a >= 1)
	{
		b = a % 10;
		a /= 10;
		temp = 1;
		for (int i = 0; i < power; i++)
		{
			temp *= b;
		}
		sum += temp;
	}

	if (sum == c)
		cout << c << " is armstrong number." << endl;
	else
		cout << c << " is not armstrong number." << endl;
}
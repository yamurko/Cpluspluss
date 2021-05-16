#include<iostream>
#include<stdlib.h>
#include<string>
#define N 13

using namespace std;

int main()
{
	char str[13] = "Hello World.";
	char* p = str;

	cout << p << endl;

	for (int i = 0; i < N - 1; i++)
	{
		cout << "a[" << i << "] = " << *p << endl; //cout << "a[" << i << "] = " << a[i] << endl;
		cout << "a[" << i << "] = " << p << endl; //cout << "a[" << i << "] = " << &a[i] << endl;
		cout << "\n--------------------\n\n";
		p++;
	}

	system("pause");
	return 0;
}
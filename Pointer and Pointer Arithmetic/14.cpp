#include<iostream>
#include<time.h>
#define N 5

using namespace std;

int main()
{
	int a[N];
	srand(time(0));

	for (int i = 0; i < N; i++)
	{
		a[i] = rand() % 10;
	}

	int* p = a;

	for (int i = 0; i < N; i++)
	{
		cout << "&a[" << i << "] = " << *p << endl;  //cout << "&a[" << i << "] = " << a[i] << endl; 
		cout << "&a[" << i << "] = " << p << endl; //cout << "&a[" << i << "] = " << &a[i] << endl;
		cout << "\n--------------------\n\n";
		p++;
	}
	system("pause");
	return 0;
}
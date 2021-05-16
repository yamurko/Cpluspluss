#include<iostream>

using namespace std;

int main()
{
	int a[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "&a[" << i << "] = " << &a[i] << endl;// adresin degerleri 4er artiyor bunun sebebi int 4 bytelik yer kaplar.
	}

	cout << "address of x: " << &a << endl;// dizinin adi dizinin ilk elemaninin adresini temsil eder.

	/*dizinin 2. elemaninin adresine ulasmak icin ise dizinin adina aritmetik olarak bir eklenir.
	bu islemlere bu sekilde dizinin adini arttirarak ve azaltarak devam edilebilir. buna pointer aritmetigi denir.*/

	int b[] = { 1,2,6,4 };
	int* p = b;

	cout << *p << endl;
	cout << p << endl;

	p++;

	cout << *p << endl;
	cout << p << endl;

	cout << *(p + 1) << endl;
	cout << p << endl;
	cout << p + 1 << endl;

	system("pause");
	return 0;
}
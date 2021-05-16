#include<iostream>
#include<stdlib.h>

using namespace std;

void main(void)
{
	int M[3][6] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18 };
	int* p, * s, * q;

	p = &M[0][0];

	cout << "Matris ya da p'nin icindeki adres: (&p) " << &p << endl << endl;

	s = &M[0][0];

	cout << "s'in icindeki adres: (&s) " << &s << endl << endl;

	s = s + 3;
	
	cout << "s'in icindeki adres: (&s) " << &s << endl;
	cout << "s'in isaret ettigi deger: (*s) " << *s << endl << endl;

	q = &M[0][0];
	q = q + 6;

	cout << "q'nun icindeki adres: (&q) " << &q << endl;
	cout << "q'nun isaret ettigi deger: (*q) " << *q << endl << endl;

}
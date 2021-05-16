#include<iostream>
#include<stdlib.h>

using namespace std;

void main(void)
{
	char c1 = 'A', c2 = 'B';
	char* p = &c1;
	char** pp = NULL;

	cout << "c1: " << c1 << endl;
	cout << "&c1: " << (void *)&c1 << endl;
	cout << "p: " << *p << endl;
	cout << "&p: " << (void *)p << endl;
	cout << "c2: " << c2 << endl;
	cout << "&c2: " << (void *)&c2 << endl << endl << endl;

	pp = &p;

	cout << "c1: " << c1 << endl;
	cout << "&c1: " << (void*)&c1 << endl;
	cout << "p: " << *p << endl;
	cout << "&p: " << (void *)p << endl;
	cout << "pp: " << (void *)*pp << endl;
	cout << "&pp: " << (void *)pp << endl;
	cout << "c2: " << c2 << endl;
	cout << "&c2: " << (void*)&c2 << endl << endl << endl;

	*pp = &c2; /* make p point to c2. Same as p=&c2 */

	cout << "c1: " << c1 << endl;
	cout << "&c1: " << (void *)&c1 << endl;
	cout << "p: " << *p << endl;
	cout << "&p: " << (void *)p << endl;
	cout << "pp: " << (void *)*pp << endl;
	cout << "&pp: " << (void *)pp << endl;
	cout << "c2: " << c2 << endl;
	cout << "&c2: " << (void *)&c2 << endl << endl << endl;

	**pp = 'R'; /* same as *p = 'R' or c2 = 'R' */

	cout << "c1: " << c1 << endl;
	cout << "&c1: " << (void *)&c1 << endl;
	cout << "p: " << *p << endl;
	cout << "&p: " << (void *)p << endl;
	cout << "pp: " << (void *)*pp << endl;
	cout << "&pp: " << (void *)pp << endl;
	cout << "c2: " << c2 << endl;
	cout << "&c2: " << (void *)&c2 << endl << endl << endl;

	system("pause");
}


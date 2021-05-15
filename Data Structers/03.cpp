#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
	enum Days
	{
		mon,
		tue,
		wed,
		thu,
		fri,
		sat,
		sun 
	};

	for (int i = 0; i < 7; i++)
	{
		if (i == wed)
			cout << "Wednesday" << endl;
	}

	system("pause");
	return 0;
}
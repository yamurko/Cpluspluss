#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

int vowels(char[], int, int);
int consonants(char[], int, int);

int main()
{
	char string[100];
	char ch = 'a';

	puts("Enter string: ");
	cin.getline(string, 100);

	int len = strlen(string) - 1;

	cout << "Length: " << len << endl;

	int vowel, consonant;

	vowel = vowels(string, 0, len);

	consonant = consonants(string, 0, len);

	cout << "Number of vowel " << vowel << endl;
	cout << "Number of consonant " << consonant << endl;

	system("pause");
	return 0;
}

int vowels(char string[100], int vow, int len)
{
	char* pnt = &string[0];

	if (*pnt == 'a' || *pnt == 'e' || *pnt == 'u' || *pnt == 'o' || *pnt == 'i')
	{
		vow++;
	}

	else if (*pnt == 'A' || *pnt == 'E' || *pnt == 'U' || *pnt == 'O' || *pnt == 'I')
	{
		vow++;
	}

	for (int i = 1; i < len; i++)
	{
		char* pnt = &string[i];

		if (*pnt == 'a' || *pnt == 'e' || *pnt == 'u' || *pnt == 'o' || *pnt == 'i')
		{
			vow++;
		}

		else if (*pnt == 'A' || *pnt == 'E' || *pnt == 'U' || *pnt == 'O' || *pnt == 'I')
		{
			vow++;
		}
	}

	return vow;
}

int consonants(char string[], int cons, int len)
{
	char* pnt = &string[0];

	switch (*pnt)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'O':
	case 'I':
	case 'U':
	case'/n':
		break;
	default:
		cons++;
		break;
	}

	for (int i = 1; i < len; i++)
	{
		char* pnt = &string[i];

		switch (*pnt)
		{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'O':
		case 'I':
		case 'U':
		case'/n':
			break;
		default:
			cons++;
			break;
		}
	}

	return cons;
}
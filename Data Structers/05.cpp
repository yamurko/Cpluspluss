#include<iostream>
#include<stdlib.h>
#include<string>
#include<conio.h>
#include<iomanip>
#define size 100

using namespace std;

void menu(void);
void add(void);
void list(void);
void del(void);

typedef struct student
{
	char name[20];
	char id[20];
}student;

student record[size];
student temp;

char nname[20], iid[20];
int x = 0;

int main()
{

	menu();

	system("pause");
	return 0;
}

void menu(void)
{
	char ch;

	do
	{
		cout << "\t************MENU************" << endl;
		cout << "\t---------1. Added---------" << endl;
		cout << "\t---------2. List---------" << endl;
		cout << "\t---------3. Delete---------" << endl;
		cout << "\t---------4. Exit---------" << endl;

		cout << "Enter the transaction you want to do: ";
		ch = _getch();
		system("cls");

		if (ch == '1')
			add();

		else if (ch == '2')
			list();

		else if (ch == '3')
			del();

		else
			exit(0);

	} while (ch != '4');
	
}

void add(void)
{
	cout << "---------Add Record---------" << endl << endl;

	if (x > 100)
		cout << "Your list is full!";
	else
	{
		cout << "Enter student name: ";
		cin.getline(nname, 20);
		strcpy_s(record[x].name, 20, nname);
		cout << endl;

		cout << "Enter student id: ";
		cin.getline(iid, 20);
		strcpy_s(record[x].id, 20, iid);
		cout << endl;

		x++;
	}
		

	cout << "Return to menu enter any character.";
	_getch();
	system("cls");
}

void list(void)
{
	cout << "---------List Record---------" << endl << endl;

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < x; j++)
		{
			if (strcmp(record[i].name, record[j].name) > 0)
			{
				temp = record[i];
				record[i] = record[j];
				record[j] = temp;
				if (record[i].name[0] == '\0')
				{
					for (int k = 0; k < j; k++) {

						if (k >= i) 
						{
							record[k] = record[k + 1];
						}
					}
				}
			}
		}
	}

	cout << setw(15) << "Student name: ";
	cout << setw(15) << "Student id: ";
	cout << endl;

	

	for (int i = 0; i < x; i++)
	{
		cout << setw(15) << record[i].name;
		cout << setw(15) << record[i].id;
		cout << endl;
	}
	


	cout << endl;
	cout << "Return to menu enter any character.";
	_getch();
	system("cls");
}

void del(void)
{
	int index;

	cout << "---------Delete Record---------" << endl << endl;

	cout << "Enter the id of the student you want to delete";
	cin.getline(iid, 20);

	for (int i = 0; i < x; i++)
	{
		if (strcmp(iid, record[i].id) == 0)
		{
			index = i;
			break;
		}
		else
			index = -1;
	}

	if (index != -1)
	{
		cout << "Student is deleting..." << endl;
		record[index].name[0] = '\0';
		record[index].id[0] = '\0';
	}
	else
		cout << "Student cannot find." << endl;

	cout << "Return to menu enter any character.";
	_getch();
	system("cls");
}
#include<iostream>
#include<stdlib.h>

using namespace std;

typedef struct student
{
	char name[40];
	unsigned int midterm;
	unsigned int final;

}student;

void readStudent(student[], int n);
void printStudent(student*, int n);


int main()
{
	int n;

	cout << "How many student are there?" << endl;
	cin >> n;

	struct student *p = new struct student[n];

	readStudent(p, n);
	cout << endl;
	printStudent(p, n);

	system("pause");
	return 0;
}

void readStudent(student list[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Enter " << i + 1 << ". student name: ";
		cin.ignore();
		cin.getline(list[i].name,40);
		cout << "Enter midterm grade: ";
		cin >> list[i].midterm;
		cout << "Enter final grade: ";
		cin >> list[i].final;
	}
}

void printStudent(student *list, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << i + 1 << ". student is: " << list[i].name << endl;
		cout << "Midterm grade is: " << list[i].midterm << endl;
		cout << "Final grade is: " << list[i].final << endl;
	}
}
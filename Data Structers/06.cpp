#include<iostream>
#include<stdlib.h>
#include<string>

using namespace std;

struct Students
{
	char name[20];
	char surname[20];
	int age;
};

int main()
{
	struct Students student1;
	int count;

	cout << "Enter number of student: ";

	puts("Enter your name, surname and age: ");
	cin.getline(student1.name,20);
	cin.getline(student1.surname,20);
	cin >> student1.age;

	cout << "Name:" << student1.name << endl;
	cout << "Surname:" << student1.surname << endl;
	cout << "Age:" << student1.age << endl;

	system("pause");
	return 0;
}
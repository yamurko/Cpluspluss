#include <iostream>
#include <string>

using namespace std;

struct date {
	int day; 
	int month; 
	int year;
};

struct date createDate(int day, int month, int year) {
	struct date d;
	
	d.day = day;
	d.month = month;
	d.year = year; 

	return d;
}

struct students {
	char name[30];
	int id;
	char depart[50];
	struct date entryDate;
};
void cretateList(struct students* stu, const char namee[], int idd, const char departt[], struct date entryDatee) {
	strcpy_s(stu->name, namee);
	stu->id = idd;
	strcpy_s(stu->depart, departt);
	stu->entryDate = entryDatee;
}

int main() 
{
	struct students list[20];

	char studentName[30];
	int studentId;	
	char studentDepart[50];	
	int studentEntryDateDay;
	int studentEntryDateMonth;
	int studentEntryDateYear;

	int num;

	cout << "Enter number of students: ";
	cin >> num;

	cout << endl;

	for (int i = 0; i < num; i++)
	{
		cin.ignore();
		cout << "Enter name of " << i + 1 << ". student:";
		cin.getline(studentName, 30);

		cout << "Enter id of " << i + 1 << ". student:";
		cin >> studentId;

		cin.ignore();
		cout << "Enter depart of " << i + 1 << ". student:";
		cin.getline(studentDepart, 50);

		cout << "Enter the date the " << i + 1 << ". student enrolled: (seperate day,month,year)";
		cin >> studentEntryDateDay;
		cin >> studentEntryDateMonth;
		cin >> studentEntryDateYear;

		cout << endl << endl;

		cretateList(&list[i], studentName, studentId, studentDepart, createDate(studentEntryDateDay, studentEntryDateMonth, studentEntryDateYear));
	}

	for (int i = 0; i < num; i++)
	{
		
		cout << endl;
		cout << "Name of " << i + 1. << ". student:" << list[i].name << endl;
		cout << "Id of " << i + 1. << ". student:" << list[i].id << endl;
		cout << "Department of " << i + 1. << ". student:" << list[i].depart << endl;
		cout << "the date the " << i + 1 << ". student enrolled:" <<
			list[i].entryDate.day << "." << list[i].entryDate.month <<
			"." << list[i].entryDate.year << endl;
	}


	return 0;
}
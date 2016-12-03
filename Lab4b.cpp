#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <iomanip>


using namespace std;
struct List
{
	char Exam[64];
	unsigned int Marks;
	
};

struct Student
{
	char Name[64];
	unsigned int Year;
	List lst ;
};




int main()
{
	Student *pL;
	unsigned int n;
	unsigned int m;
	cout << "Number of students =" << endl;
	cin >> n;
	cout << "Number of Exams" << endl;
	cin >> m;

	pL = (Student *)malloc(n * sizeof(Student));
	for (unsigned int i = 0; i < n; ++i)
	{
		cin.clear();
		cout << "Student Num:" << i + 1 <<endl;
		cout << "Student`s name: " << endl;
		cin >> pL[i].Name;
		cin.clear();

		cout << "Enter year of burth: ";
		cin >> pL[i].Year;
		cin.clear();

		for (unsigned i = 0; i < m; ++i)
		{
			cout << "Exam:";
			cin >> pL[i].lst.Exam;
			cin.clear();

			cout << "Mark :";
			cin >> pL[i].lst.Marks;
			cin.clear();
		}
	}

	for (unsigned i = 0; i < n; ++i)
	{
		cout << pL[i].Name << "(" << pL[i].Year << ")" <<endl;
		for (unsigned int i = 0; i < m; i++)
		{
			cout << " " << pL[i].lst.Exam; 
			cout << " " << pL[i].lst.Marks << endl;
		}
	}
	
	
	unsigned int k = 0;
	for (unsigned int i = 0; i < n; ++i)
	{
		if (pL[i].Year < 1999)
		{
			k++;
		}
	}
	if (k)
	{
		cout << "Student elder then 18 y.o : \n" << k << endl;
	}

	cout << "Press any button to exit \n";
	free(pL);
	_getch();
	return 0;
}
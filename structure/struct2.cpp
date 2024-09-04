#include<iostream>

using namespace std;

struct student{
	int rollno;
	char name[25];
	char dept[10];
	int marks;
};

int main()
{
	struct student s;

	cout << "Enter your roll no: ";
	cin >> s.rollno;
	cin.ignore();
	cout << "Enter your name: ";
	cin.getline(s.name,25);

	cout << "Enter your dept: ";
	cin.getline(s.dept,10);

	cout << "Enter your marks: ";
	cin >> s.marks;

	cout << s.rollno << endl;
	cout << s.name << endl;
	cout << s.dept << endl;;
	cout << s.marks << endl;
	cout << sizeof(s);
	return 0;
}


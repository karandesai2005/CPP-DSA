#include<iostream>

using namespace std;

int main()
{
	int a = 12;
	int *ptr = &a;

	cout << a << "\t this is the value stored in var a\n";
	cout << &a << "\t this is the mem address where the the variable a is stored\n";
	cout << ptr << "\t this is the pointer var where we have stored the addre of var a\n";
	cout << *ptr << "\t this is the actual value stored in the pointer\n";
	return 0;
}


#include<iostream>

using namespace std;

int main()
{
	int a = 12;
	int b = 13;
	int *p = &a;
	int *q = &b;

	cout << p << " the value of pointer p\n";
	cout << q << " the value of pointer q\n";
	cout << *p << " the value of *p\n";
	cout << *q << " the value of *q\n";
	p = q;
cout << "-------------------------------------------"<<endl;
	cout << p << " the value of pointer p\n";         
        cout << q << " the value of pointer q\n";
        cout << *p << " the value of *p\n";
        cout << *q << " the value of *q\n";
	return 0;
}

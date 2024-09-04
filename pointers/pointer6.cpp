#include<iostream>

using namespace std;

int main()
{
	int a = 12;
	int *p = &a;
	cout << p << endl;
	p = p + 3;
	cout <<p<<endl;
	return 0;	
}


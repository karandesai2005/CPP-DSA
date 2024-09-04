#include<iostream>

using namespace std;

int main()
{
	float f = 10.5;
	float *ptr = &f;
	float p = 2.5;
	(*ptr)++;
	*ptr = p;
	cout << *ptr << " " << f << " " <<p;
	return 0;
}
//o/p => *ptr = 11.5
//*ptr = 2.5
//2.5 2.5 2.5
//so basiclly when you update ptr pointer to 2.5 you are also update the value the pointer poits too hence f = 2.5 also

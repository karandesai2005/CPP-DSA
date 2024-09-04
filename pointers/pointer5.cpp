#include<iostream>

using namespace std;
int main()
{
	int a = 7;
	int *b = &a;
	b = b+1;
	cout << a << " " << *b << endl;
	return 0;
}
//o/p will be 7 and garbage value because 
//you cannot increament address it wil return garb value
//a is 7 becasue as we increment b which is storing address of var so now b is no more point to a so a stays unchanged

#include<iostream>

using namespace std;

int power(int basenum, int pownum)
{
	int result = 1;
	for(int i =0;i<pownum;i++)
	{
		result = result * basenum;
	}
	return result;
}
int main()
{
	cout << power(	2,3);
	return 0;
}

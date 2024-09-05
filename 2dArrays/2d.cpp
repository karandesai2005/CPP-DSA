#include<iostream>
using namespace std;

int main()
{
	int row,coloum;
	int a[row][coloum];
	
	cout << "enter row size ";
	cin >> row;
	cout << "enter coloum size: ";
	cin >> coloum;
	cout << "Enter values for array a:\t";
	for (int i = 0;i<row;i++)
	{
		for(int j = 0;j<coloum;j++)
		{
			cin >> a[i][j];
		}
		cout << endl;
	}

	cout << "display\n";
	for(int i = 0;i<row;i++)
	{
		for(int j = 0;j<coloum;j++)
		{
			cout << a[i][j];
		}
		cout << endl;
	}

	return 0;
}

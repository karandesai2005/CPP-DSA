#include<iostream>

using namespace std;

int main()
{
	int n;
	cout << "array size: ";
	cin >> n;
	int a[n];
	for(int i = 0;i<n;i++)
	{
		cin >> a[i];
	}
	int m;
	cout << "enter the values you wanna search: ";
	cin >> m;
	for (int i = 0;i<n;i++)
	{
		if(a[i] == m)
		{
			cout<<"value " << a[i] << " found at "<< i<<" postion"<<endl;
		}
	}
	return 0;
}

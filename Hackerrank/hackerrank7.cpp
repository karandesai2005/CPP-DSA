#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n;
	int a[100];
     	cout << "enter total number of element you want in array\t";
	cin >> n;
	for (int i = 0;i<n;i++)
	{
		cin >> a[i];
	}

	for(int i =n;i>=0;i--)
	{
		cout << a[i]<<endl;
	}
    	
   	 return 0;
}


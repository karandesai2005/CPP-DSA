#include<iostream>

using namespace std;

int main()

{
	int numgrid[3][2] = {
		{1,2},
		{3,4},
		{5,6}
	};

	for(int i = 0;i<3;i++)
	{
		for(int j = 0;j<2;j++){
			cout << numgrid[i][j];
		}
			cout << endl;
	}
	return 0;
}


#include<iostream>

using namespace std;

struct rectangle
{
	int l;
	int b;
};

int main()
{
	int *a;
	float *b;
	char *c;
	double *d;
	struct rectangle *p5;

	cout <<sizeof(a)<<endl;
	cout <<sizeof(b)<<endl;
	cout <<sizeof(c)<<endl;
	cout <<sizeof(d)<<endl;
	cout <<sizeof(p5)<<endl;
	return 0;
}

//so basically irrespective of the datatatype of the value the pointer would allocate same amount of space in our case its 8bytes

#include<iostream>
#include<stdlib.h>

using namespace std;
 
int main()
{
	int *p;
	p = new int[5] //dynamically alocating in heap memory;

	p[0] =12; p[1] = 13;p[2] = 14;p[3]=2;p[4]=7;

	for(int i = 0; i<5;i++){
		cout << "values: "<<p[i] <<" address: " << &p[i] << endl;
	}

	delete [] p//delallocating memmory;
	return 0;
}

//we first create an array in heap memmory
//in c++ we could not access heap memmory so we use pointers 
//so whenever we dynamically allocate memmory we must free it after useing therefore we use delete command for array we use delet []  pointer name;

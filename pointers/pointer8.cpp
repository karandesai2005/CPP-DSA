#include<iostream>

using namespace std;

int main()
{
	 int A[5] = {1,2,3,4,5};

	 int *p;
	 p = A;
	
	  for(int i = 0;i<5;i++){
		  cout << &p[i]<<endl;
	  }
	 return 0;
}

//hey so we first declared a array of sixze 5
//then we decalred an pointer p 
//we intialized pouinter with A
//then we printed each address of values stored in array using for loop and &p[i]
//output is this
//0x7ffdb8da3ee0
//0x7ffdb8da3ee4
//0x7ffdb8da3ee8
//0x7ffdb8da3eec
//0x7ffdb8da3ef0
//output confirms that our array elements are stored in contiguous memory locations, with each integer occupying 4 bytes.

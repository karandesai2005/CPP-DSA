#include <iostream>

using namespace std;

int main(){
	//int *p = 0;
	int a = 17;
	int b = 17;
	//*p = a;
	int *c = &b;//c pointer stores the addres of var b
	*c = 7;//we update the pointer value to 7
	cout << a << " " << b<<endl;
	return 0;
}

//a = 17
//b = 17
//c = addres of var b and *c = value 17(value of b)
//*c = 7
//b = 7 too 
//17 7== > o/p


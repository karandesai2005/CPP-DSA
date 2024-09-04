#include<iostream>

using namespace std;


void update(int *a,int *b) {
    // Complete this function    
    int c = *a;
    int d = *b;

    *a = c+d;
    *b = c-d;
}
int main()
{
	int a, b;
	int *pa = &a, *pb = &b;
    
   	 cin >> a >> b;;
   	 update(pa, pb);
	 cout << a << "\t" <<b << endl;

    	return 0;
}
	

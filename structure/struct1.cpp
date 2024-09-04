#include<iostream>

using namespace std;

struct Rect{
	int length;
	int bredth;
};

int main()
{
	struct Rect r;//declaration
	r = {10,5};//initialization
	cout << r.length <<endl;
	return 0;
}


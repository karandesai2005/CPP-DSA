#include<iostream>

using namespace std;

int sum_of_four(int q,int w,int e,int r);
int main()
{
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	int res = sum_of_four(a,b,c,d);
	cout << res;
	return 0;
}
int sum_of_four(int q,int w,int e,int r)
{
	return q + w + e +r;
}

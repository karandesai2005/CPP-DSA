#include<iostream>

using namespace std;

int main()
{
	string food = "Pizza";
	string *ptr = &food;
	cout << food << "\tPrints the value of food"<< endl; //prints value of food
	cout << ptr << "\tprints the mem addre of value stred in food" << endl; //prints the mem addr where value of food is stored
	cout << *ptr << "\tprints the value stored in mem addre" << endl;//prints the value stored in mem addre;
	return 0;
}


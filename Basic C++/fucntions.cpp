#include <iostream>
#include <cmath>

using namespace std;

void sayHi(string name, int age);
int main()
{
    string user;
    int age;
    cout << "enter your name: ";
    getline(cin,user);
    cout << "enter your age: ";
    cin >> age;
    sayHi(user,age);
    return 0;
}
void sayHi(string name , int age)
{
    cout << "hello " << name << " you are: "<<age;
}
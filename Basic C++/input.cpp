#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int x;
    cout << "enter value: ";
    cin >> x; 
    cout << "the value of x is " << x << endl;

    // Clear the input buffer
    cin.ignore();

    string name;
    cout << "enter your name: ";
    getline(cin, name);
    cout << "hello " << name << endl;
    
    return 0;
}

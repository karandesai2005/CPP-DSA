#include <iostream>

using namespace std;

//write a function that return a cube
int cube(int a);
int main()
{
    int n;
    cout << "Enter your value: ";
    cin >> n;
    int ans = cube(n);
    cout << ans;
}

int cube(int a){
    return a * a * a;
    cout << "hello"; // this is not gonna work as c++ wont execute command after return 
}
#include <iostream>

using namespace std;

int got(int a,int b,int c)
{
    int result;
    if(a>= b && a>=c){
        result = a;
    }
    else if (b>=c)
    {
        result = b;
        /* code */
    }
    else{
        result = c;
    }
    return result;
}
int main()
{
    int a,b,c;
    cout << "Enter your 3 values\t";
    cin >> a >> b >> c;
    int greatest = got(a,b,c);
    cout << greatest;
    return 0;
}
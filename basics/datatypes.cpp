#include<iostream>

using namespace std;

int main()
{
    char grade ='A';
    string phrase = "Karan Desai";
    int age = 50;
    float f = 5.3;
    double d = 4.656; // more common
    bool isMale = true;

    cout << grade << endl;
    cout << phrase << endl;
    cout << age << endl;
    cout << "This is constant" << endl;
    cout << "this is string" << endl;
    cout << phrase.length() << endl; //tells us the len of our string
    cout << phrase[0] <<endl;//indexing
    phrase[1] = 'B';
    cout << phrase << endl;
    cout << phrase.find("K");
    cout << phrase.substr(0 , 3);




}
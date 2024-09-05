#include<iostream>

using namespace std;

int main()
{
    string colour,plural_noun,celb;
    cout << "enter colour: ";
    getline(cin,colour);
    cout << "enter plural_Noun: ";
    getline(cin,plural_noun);
    cout << "enter celeb";
    getline(cin, celb);

    cout << colour << " are red"<<endl;
    cout << plural_noun << " are blue"<<endl;
    cout << "I love " << celb << endl;
}
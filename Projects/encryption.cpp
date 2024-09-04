#include <iostream>
#include <string>
#include <algorithm>
//going to develop a encryption algo that encrypts a given text by shifting a values at a particular key and displays it
// a b c d e f g h i j k l m n o p q r s t u v w x y z
//text karan
// cipher = m

using namespace std;

string encryption(string text,int key);
int main()
{
    string text;
    int key;
    cout << "Enter the text u wanna encrypt\t";//ask user for ip
    getline(cin,text);//take inputtext
    transform(text.begin(), text.end(), text.begin(), ::toupper);//to convert to uppercase
    cout << "Enter the key for encryption: ";//asking for key
    cin >> key;
    string res = encryption(text,key);//calling function

    return 0;
}

string encryption(string text,int key){
    for(int i = 0;i<text.size(); i++)
    {
        cout << "Plain text" << " ";
        cout << text[i] << " ";//display text
        int asciiValue = (int)text[i];//finding there  ASCIIVALUE
        cout << asciiValue << " ";//displaying Ascii value
        int n = asciiValue - 65;//Sutracting the ascii value of text with 65
        cout << n << "\t";// displaying value when subtracting the ascii value of text with 65
        int cipherN = n + key;//shift the value based on key
        cout << cipherN << " ";//displaying the shifted value
        int N = cipherN + 65;//adding 65 to get the original ASCII VALUE
        char cipher = (char)N;
        cout << "cipher text" << " ";
        cout << cipher <<endl;
    }
}
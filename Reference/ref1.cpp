#include<iostream>

using namespace std;

int main (int argc, char *argv[]) {
  int a = 10;
  int &r = a;
  cout << a<<endl;
  r++;
  cout << a <<r<<endl<<&r<<endl;
  return 0;
}

#include<iostream>

using namespace std;


struct Rect{
  int len;
  int bredth;
};
int main (int argc, char *argv[]) {
  Rect r = {10,20};
  Rect *p  = &r;
  cout <<r.len<<endl;
  cout << p->len<<endl;
  p->len = 20;
  cout << r.len<<endl;
  return 0;
}

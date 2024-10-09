#include<iostream>

using namespace std;

struct Rect {
  int len;
  int bredth;
};
int main (int argc, char *argv[]) {

  Rect *p;
  //p = (struct Rect*)malloc(sizeof(struct Rect));
  p = new Rect();
  p->len = 20;
  p->bredth =30;
  cout <<p->len<<" "<<p->bredth<<" "<<endl;
  return 0;
}

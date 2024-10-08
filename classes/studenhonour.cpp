#include<iostream>

using namespace std;

class student{
  public:
  string name;
  string course;
  double gpa;

  student(string aname, string acourse, double agpa)
  {
    name = aname;
    course = acourse;
    gpa =  agpa;
  }

  bool hasHonours()
  {
    if (gpa>=3.5) {
      return true;
    }
    return false;
  }
};

int main (int argc, char *argv[]) {
  student std1("Karan","eng",5.0);
  cout << std1.hasHonours()<<endl;
  student std2("deepti","arts",1.0);
  cout << std2.hasHonours();
  return 0;
}




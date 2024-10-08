#include<iostream>

using namespace std;

class Movie{
  public:
    string title;
    string director;
    string rating;
    Movie(string atitle, string adirector, string arating)
    {
      title = atitle;
      director = adirector;
      rating = arating;
    }

};

int main (int argc, char *argv[]) {
  Movie M1("MI", "tom" "PG-13");
  cout << M1.rating;
  return 0;
}

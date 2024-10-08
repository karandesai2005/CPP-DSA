#include<iostream>

using namespace std;

class Book{
  public:
  string title;
  string author;
  int pages;
  Book()
  {
  cout<<"default constructor\n";
  }
  //this is parameterized constructor 
  Book(string atitle, string aAuthor, int apages)
  {
    title = atitle;
    author = aAuthor;
    pages = apages;
  }
};

int main (int argc, char *argv[]) {
  Book book1("harry porter","jk rowling",232);
   cout << book1.title <<endl;
  cout << book1.author <<endl;
  cout << book1.pages <<endl;

  Book book2("percy jackson", "rick riordan",324);

  cout << book2.title <<endl;
  cout << book2.author <<endl;
  cout << book2.pages <<endl;
  Book book3;
  return 0;
}

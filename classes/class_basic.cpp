#include<iostream>

using namespace std;
 
class Book{
  public:
    string title;
    string author;
    int pages;
};



int main()
{
  Book book1;
  book1.title = "harry porter";
  book1.author = "JK ROWLING";
  book1.pages = 500;
  
  cout << book1.title;
  cout <<endl;
  Book book2;
  book2.title = "percy jackson";
  book2.author = "Rick Riordan";
  book2.pages = 34;
  cout << book2.pages;
  

  return 0;
}

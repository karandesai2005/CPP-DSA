#include<iostream> 
using namespace std;

int main (int argc, char *argv[]) {
  int n,temp;
  cout << "enter number of ele: ";
  cin >> n;
  int a[n],min;
  cout << "enter values: \n";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cout <<"selection sort\n";
  for (int i = 0; i < n-1; i++) {
    min = i;
    for (int j = i+1; j < n; j++) {
      if (a[j] < a[min]) {
        min = j;
      }
    }
    temp = a[i];
    a[i] = a[min];
    a[min] = temp;


    for (int i = 0; i < n; i++) {
      cout << a[i] << " ";
    }
    cout <<endl;
  }

  return 0;
}

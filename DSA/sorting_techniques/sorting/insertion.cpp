#include<iostream>
using namespace std;

int main (int argc, char *argv[]) {
  int j,n;
  cout <<"enter number of ele: ";
  cin >>n;
  int a[n];
  cout << "enter values: \n";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cout << "insertion sort: \n";
  for (int i = 1; i < n; i++) {
    int key = a[i];
    j = i - 1;
    while(j>=0 && a[j]>key)
    {
      a[j+1] = a[j];
      j = j- 1;
    }
    a[j+1] = key;
    for (int i = 0; i < n; i++) {
      cout << a[i] << " ";
    }
    cout << endl;
  }
  
  return 0;
}

#include<iostream>

using namespace std;

int main (int argc, char *argv[]) {
  int n,temp;
  cout <<"enter no. of elements : ";
  cin >> n;
  int arr[n];
  cout << "enter value in array: ";
  for (int  i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < n-1; i++) {
    for (int j = 0; j < n-i; j++) {
      if (arr[j] > arr[j+1]) {
        temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
      }
    }
    for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
    cout <<endl;
  }
  return 0;
}

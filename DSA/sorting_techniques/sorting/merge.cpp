#include <iostream>

using namespace std;
void merge(int arr[], int start, int mid, int end)
{
  int n1 = mid - start +1;
  int n2 = end - start;
  int a[n1];
  int b[n2];
  for (int i = 0; i < n1; i++)
  {
    a[i] = arr[start + i];
  }
  for (int i = 0; i < n2; i++)
  {
    b[i] = arr[mid+1+i];
  }
  
  int i = 0;
  int j = 0;
  int k = start;
  
}
void mergesort(int arr[],int start, int end){
int mid;
if(start<end)
{
  mid = (start+end)/2;
  mergesort(arr,start,mid);
  mergesort(arr,mid+1,end);
  merge(arr,start,mid,end);
}
}
int main (int argc, char *argv[]) {
  int n;
  cout << "enter the number of ele u wanna enter in array: ";
  cin >> n;
  int a[n];
  cout << "enter elements in array:\n";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  return 0;
}

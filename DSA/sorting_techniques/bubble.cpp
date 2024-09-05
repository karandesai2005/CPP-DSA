#include<iostream>

using namespace std;

int main()
{
    int n,temp;
    cout << "array size: ";
    cin >> n;
    int a[n];
    cout<< "enter elements in array: ";
    for (int  i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                /* code */
            }
            
        }
        
    }
    cout << "sorted array: ";
        for (int  i = 0; i < n; i++)
    {
        cout<< a[i] << endl;
    }
    return 0;
    

}
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
        int minterm = i;

        for (int j = i+1; j < n; j++)
        {
            if (a[j]<a[minterm])
            {
                minterm = j;
            }
            
        }

        int temp = a[minterm];
        a[minterm] = a[i];
        a[i] = temp;
        

    }

    cout << "selection sorted array: ";
        for (int  i = 0; i < n; i++)
    {
        cout<< a[i] << endl;
    }
    return 0;
    
}

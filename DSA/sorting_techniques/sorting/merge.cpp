#include <iostream>

using namespace std;

void merge(int arr[], int start, int mid, int end) {
    int n1 = mid - start + 1;  // Number of elements in the left half
    int n2 = end - mid;        // Number of elements in the right half

    int a[n1];  // Temporary array for the left half
    int b[n2];  // Temporary array for the right half

    // Copy data to temporary arrays
    for (int i = 0; i < n1; i++) {
        a[i] = arr[start + i];
    }
    for (int i = 0; i < n2; i++) {
        b[i] = arr[mid + 1 + i];
    }

    int i = 0, j = 0, k = start;

    // Merge the temporary arrays back into the original array
    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            arr[k] = a[i];
            i++;
        } else {
            arr[k] = b[j];
            j++;
        }
        k++;
    }

    // Copy any remaining elements from a[]
    while (i < n1) {
        arr[k] = a[i];
        i++;
        k++;
    }

    // Copy any remaining elements from b[]
    while (j < n2) {
        arr[k] = b[j];
        j++;
        k++;
    }
}

void mergesort(int arr[], int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;  // Find the midpoint
        mergesort(arr, start, mid);    // Sort the left half
        mergesort(arr, mid + 1, end);  // Sort the right half
        merge(arr, start, mid, end);   // Merge the two halves
    }
}

int main() {
    int n;
    cout << "Enter the number of elements you want to enter in the array: ";
    cin >> n;
    
    int a[n];  // Array to store input elements
    
    cout << "Enter elements in array:\n";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Call mergesort to sort the array
    mergesort(a, 0, n - 1);

    // Display the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

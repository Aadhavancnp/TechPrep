# Sorting

## Bubble Sort

```c++
#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }


    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // function call
    bubbleSort(arr, n);

    return 0;
}
```

## Insertion Sort

```c++
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int mini;

    // Selection Sort algorithm
    for (int i = 0; i < n - 1; i++) {
        mini = i;
        for (int j = i; j < n; j++) {
            if (arr[j] < arr[mini]) {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }

    // Output sorted array
    cout << "After sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
```

## Merge Sort

```c++
#include <iostream>
#include <vector>
using namespace std;

void mergeArray(vector<int>& arr, int low, int mid, int high) {
    int n1 = mid - low + 1;
    int n2 = high - mid;

    // Create temporary vectors
    vector<int> left(n1);
    vector<int> right(n2);

    // Copy data to temp vectors
    for (int i = 0; i < n1; ++i) {
        left[i] = arr[low + i];
    }
    for (int j = 0; j < n2; ++j) {
        right[j] = arr[mid + 1 + j];
    }

    // Merge the two sub-arrays back into arr
    int i = 0, j = 0;
    int k = low;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of left[], if any
    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }

    // Copy remaining elements of right[], if any
    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void merge(vector<int>& arr, int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;

        // Recursively sort first and second halves
        merge(arr, low, mid);
        merge(arr, mid + 1, high);

        // Merge the sorted halves
        mergeArray(arr, low, mid, high);
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    // Declare vector to hold the input
    vector<int> arr(n);

    // Take input from the user
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i){
        cin >> arr[i];
    }

     // Calling the insertion sort function
    merge(arr, 0, n);

    // Output sorted array
    cout << "After sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
```

## Selection Sort

```c++
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Calling the insertion sort function
    insertionSort(arr, n);

    // Output sorted array
    cout << "After sorting: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    return 0;
}
```
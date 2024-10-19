#include<iostream>
using namespace std;

int partition(int arr[], int s, int e) {
    int pivot = arr[s];  // Use the first element as the pivot
    int cnt = 0;

    // Count elements smaller than or equal to the pivot
    for (int i = s + 1; i <= e; i++) {
        if (arr[i] <= pivot) {
            cnt++;
        }
    }

    // Place the pivot at the correct index
    int pivotIndex = s + cnt;
    swap(arr[pivotIndex], arr[s]);

    // Partition the array around the pivot
    int i = s, j = e;

    while (i < pivotIndex && j > pivotIndex) {
        while (arr[i] <= pivot) i++;  // Move right on the left side
        while (arr[j] > pivot) j--;   // Move left on the right side

        if (i < pivotIndex && j > pivotIndex) {
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;  // Return the correct index of the pivot
}

void quicksort(int arr[], int s, int e) {
    // Base case
    if (s >= e) return;

    // Partition the array and get the pivot index
    int p = partition(arr, s, e);

    // Sort the left part
    quicksort(arr, s, p - 1);

    // Sort the right part
    quicksort(arr, p + 1, e);
}

int main() {
    int n = 6;
    int arr[6] = {3, 8, 10, 30, 1, 5};

    quicksort(arr, 0, n - 1);

    // Print the sorted array
    cout<<endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    return 0;
}

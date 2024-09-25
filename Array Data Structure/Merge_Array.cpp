#include <iostream>
using namespace std;

void merge(int arr1[], int n, int arr2[], int m, int arr3[]) {
    int i = 0, j = 0;
    int k = 0;

    // Merge the two arrays
    while(i < n && j < m) {
        if(arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }

    // Copy remaining elements of arr1, if any
    while(i < n) {
        arr3[k++] = arr1[i++];
    }

    // Copy remaining elements of arr2, if any
    while(j < m) {
        arr3[k++] = arr2[j++];
    }
}

void print(int ans[], int size) {
    for(int i = 0; i < size; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr1[5] = {2, 9, 11, 44, 55};  // Sorted array 1
    int arr2[3] = {1, 34, 43};         // Sorted array 2
    int arr3[8];                       // Array to store the merged array

    merge(arr1, 5, arr2, 3, arr3);
    
    print(arr3, 8);
    
    return 0;
}

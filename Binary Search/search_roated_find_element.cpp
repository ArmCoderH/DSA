#include <iostream>
using namespace std;

int pivot(int arr[], int n) {
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e) {
        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int binarysearch(int arr[], int s, int e, int key) {
    int start = s;
    int end = e;
    int mid = (start + end) / 2;
    
    while (start <= end) {
        if (arr[mid] == key) {
            return mid;
        }
        if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
        mid = (start + end) / 2; 
    }
    return -1;
}

int search(int arr[], int n, int k) {
    int pivat = pivot(arr, n);
    if (k >= arr[pivat] && k <= arr[n-1]) {
        return binarysearch(arr, pivat, n-1, k);
    } else {
        return binarysearch(arr, 0, pivat - 1, k);
    }
}

int main() {
    int arr[8] = {7, 9, 1, 2, 3, 4, 5, 6};  // Added missing semicolon here
    int result = search(arr, 8, 4);

    if (result != -1) {
        cout << "Element " << 4 << " found at index " << result << endl;
    } else {
        cout << "Element " << 4 << " not found in the array." << endl;
    }

    return 0;
}

#include <iostream> 
using namespace std;

void selectionSort(int arr[], int n) 
{
    for (int i = 0; i < n - 1; i++) 
    {
        int minvalue = i;

        // Find the minimum element in unsorted part
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[j] < arr[minvalue])
                minvalue = j;
        }

        // Swap the found minimum element with the first element
        swap(arr[minvalue], arr[i]);
    }
}

int main() 
{
    int n;
    cout<<"Enter array size = ";
    cin>>n;
    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    selectionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

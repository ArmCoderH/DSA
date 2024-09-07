#include<iostream>
using namespace std;

int maximum(int arr[], int size) // change void to int
{
    int max = INT_MIN;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max; // returning the max value
}

int minimum(int arr[], int size) // change void to int
{
    int min = INT_MAX;
    for(int i = 0; i < size; i++) // i < size to avoid out of bounds
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min; // returning the min value
}

int main()
{
    int size;
    cout << "Enter array size = ";
    cin >> size;
    int arr[size]; // correct the array name

    cout << "Enter array elements: " << endl;
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i]; // corrected array name
    }

    cout << "Maximum number is = " << maximum(arr, size) << endl;
    cout << "Minimum number is = " << minimum(arr, size) << endl;

    return 0;
}

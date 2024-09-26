#include<iostream>
using namespace std;

sum_of_arr1(int arr1[],int n)
{
    for(int i =0 ; i<n ; i++)
    {
        int sum = arr[i] + arr[i+1];
    }
    return sum;
}

print_Arr1(int arr1[]; int n)
[
    for(int i = 0; i<n ; i++)
    {
        cout<<arr1[i]<<" ";

    }
    cout<<endl;
]
int main()
{
    int n = 3;
    int m = 2;
     int arr1[n] = {1,2,3};
     int arr2[m] = {4,5};

    sum_of_arr1(arr1,n);
    
    print_Arr1(arr1,n);

    return 0;
}
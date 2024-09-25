// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int reverse(int arr[],int size)
{
    int start = 0;
    int end = size -1;
    
    while(start<=end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end]  = temp;
        
        start++;
        end--;
    }
    return 0;
}
int print(int arr[], int size)
{
    for(int i =0; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
int main() {
    
    int size=5;
    int even[size]={11,22,33,44,55};
    
    cout<<"Before Reverse Array"<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<even[i]<<" ";
    }
    cout<<endl;
    
    reverse(even,size);
    
    cout<<"After Reverse Array"<<endl;
    print(even,size);
    
    return 0;
}
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


int sum(int arr[],int n)
{
    int sum1 = 0;
    for(int i=0;i<n;i++)
    {
        sum1=arr[i] + sum1;
    }
    return sum1;
}


int main() {
    
    int size;
    cout<<"enter size of array = ";
    cin>>size;
    int num[size];
    
    for(int i=0;i<size;i++)
    {
        cin>>num[i];
    }
    
    cout<<"sum of array is = "<< sum(num,size);
}
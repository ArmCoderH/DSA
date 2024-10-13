#include<iostream>
using namespace std;
void marge(int *arr, int s, int e)
{

    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e - mid;

    int *first = new int[len1];
    int *second = new int[len2];

    int mainindex = s;
    //copy data into first array
    for(int i=0;i<len1;i++)
    {
        first[i]= arr[mainindex++];
    }

    mainindex = mid+1;
    // copy data into second array
    for(int i=0;i<len2;i++)
    {
        second[i] = arr[mainindex++];
    }

    //merger 2 array

    int index1 = 0;
    int index2 = 0;
    mainindex = s;
    while (index1 < len1 && index2 < len2)
    
    {
        if(first[index1] < second[index2])
        {
            arr[mainindex++] = first[index1++];
        }
        else
        {
            arr[mainindex++] = second[index2++];

        }
    }

    while (index1 < len1)
    {
        arr[mainindex++] = first[index1++];
    }
     while (index2 < len2)
    {
        arr[mainindex++] = second[index2++];
    }
    
    delete []first;
    delete []second;
    
} 
void Msort(int *arr, int s, int e)
{

    //base case
    if(s>=e)
        return;
    
    int mid = (s+e)/2;

    //left part sort
    Msort(arr,s,mid);

    //right part sort
    Msort(arr,mid+1,e);

    marge(arr,s,e);

}
int main()
{

    int n = 10;
    int arr[n] = {1,4,8,-2,60,0,3,-6,8,9};

    // sorting porform
    Msort(arr,0,n-1);
    
    cout<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<endl;
    
 return 0;
}
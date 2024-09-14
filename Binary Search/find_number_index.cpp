#include <iostream>
using namespace std;

int binarysearch(int arr[],int size, int key)
{
    int start=0;
    int end = size-1;
    int mid = (start + end)/2;
    
    
    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        
        mid = (start + end)/2; 
    }
    return -1;
}
int main(){
    
    int array1[7] = {2,4,6,8,10,12};
    int array2[7] = {0,1,3,5,7,9};
    
    int index = binarysearch(array1,7,12);

    cout<<"Array one index is="<<index <<endl;
    
    int index1 = binarysearch(array2,7,5);

    cout<<"Array two index is="<<index1 <<endl;
    
}
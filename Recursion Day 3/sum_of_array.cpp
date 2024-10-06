#include<iostream>
using namespace std;

int sumof(int arr[],int size)
{
    //base case
    if(size == 0)
        return 0;
    if(size == 1)
        return arr[0];

    int baki_ke_number = sumof(arr+1, size-1);
    int sum = arr[0] + baki_ke_number;
    return sum;
}


int main()
{

    int arr[6]  = {2,3,4,5,6,7};
    int size = 6;

    int sum = sumof(arr,size);
    cout<<"sum is="<<sum;
 return 0;
}
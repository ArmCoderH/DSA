#include<iostream>
using namespace std;

bool isshorted(int arr[],int size)
{

    //base casee
    if(size == 0 || size == 1)
    {
        return true;
    }

    if(arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        int ans = isshorted(arr+1,size-1);
        return ans;
    }


} 
int main()
{
    int arr[5] = {2,3,40,5,6};

    bool ans = isshorted(arr,5);

    if(ans)
    {
        cout<<"array is shorted !";
    }
    else{
             cout<<"array is not shorted !";

    }

 return 0;
}
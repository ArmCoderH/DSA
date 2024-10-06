#include<iostream>
using namespace std;
bool ispresent(int arr[],int size,int key)
{
    //base case
    if(size == 0)
        return false;
    

    
    if(arr[0] == key)
    {
        return true;
    }
    else
    {
         int b = ispresent(arr+1,size-1,key);
         return b;
    }
   // return true
}
int main()
{
    int key;
    int arr[5] = {2,3,4,5,6};
    int size = 5;
    cout<<"enter your key = ";
    cin>>key;
    

    bool a =  ispresent(arr,size,key);
    if(a)
    {
        cout<<"element is found ";
    }
    else
    {
        cout<<"element is not found ";
    }
 return 0;
}
// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

bool sum(int arr[],int n,int key)
{
    int sum1 = 0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        return 1;
    }
    return 0;
}


int main() {
    
    int size,element;
    cout<<"enter size of array = ";
    cin>>size;
    cout<<endl;
    
    int num[size]={1,2,3,4,5,6};
    
    cout<<"enter serching element = ";
    cin>>element;
    
    bool found = sum(num,size,element);
    
    if(found)
    {
        cout<<"Elemet Find "<<endl;
    }
    else
    {
        cout<<"Elemet Not Find";
    }
}
#include<iostream>
using namespace std;

bool isprime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
          return 0;
        }
    }
    return 1;
}

int main()
{
        int n;
        cout<<"enter numnber for check prime numbe or not =";
        cin>>n;
        if(isprime(n))
        {
            cout<<"this number is prime number";
        }
        else
        {
            cout<<"this number is not prime number";
        }
            
      //  return 0;
}

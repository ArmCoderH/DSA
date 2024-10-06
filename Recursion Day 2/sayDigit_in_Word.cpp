#include<iostream>
using namespace std;

sayDigit(int n, string arr[])
{
    if(n==0)
    return 0;

    int digit = n % 10;
    n = n / 10;

    sayDigit(n, arr);
    cout<<arr[digit]<<" ";
  

}
int main()
{

    int n;
    cout<<"Enter Digit = ";
    cin>>n;

    string arr[10] = {"ZERO","ONE","TWO",
                    "THREE","FOUR",
                    "FIVE","SIX","SEVEN","EIGHT","NINE"};

    cout<< endl;
    sayDigit(n,arr);
    cout<< endl;

    return 0;
}
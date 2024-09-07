#include<iostream>
using namespace std;


void printarray(int arr[],int size)
{
	for(int i =0 ; i<=size ; i++)
	{
		cout<< arr[i];
	}
	cout<<endl;
}

int main()
{
	int num[20] = {'a'};
	int a = sizeof(num)/sizeof(int);
	cout<<"a is=" << a << endl;
	
	/*for(int i=0;i<a;i++)
	{
		cout<< num[i];
	}*/
	
	
	int five[10] ={1,2,3};
	int n = 10;	
	printarray(five,n);
	
	
	
	int ch[30];
	int x=9;
	printarray(ch,x);
	
}
#include<iostream>
using namespace std;

//n = lenght of given string

int reverseName(char ch[], int n)
{
    int s = 0;
    int e = n - 1;

    while(s<e)
    {
        swap(ch[s++], ch[e--]);
    }
    
}

int lenName(char ch[])
{
    int count = 0;
    for(int i=0; ch[i] != '\0' ; i++)
    {
        count++;
    }
    return count;
}

int main()
{

    char ch[20];

    cout<< "Enter your name = ";
    cin>>ch;

    cout<<"Your name is = ";
    cout<< ch << endl;

    int n = lenName(ch);
    cout<<"length = " << n << endl;

    reverseName(ch,n);
    cout<< "reverse string is = ";
    cout<< ch;

   // cout << "Given string is Pelindrome or Not = "<<pelindrome(ch,n)<<endl;

    return 0;
}
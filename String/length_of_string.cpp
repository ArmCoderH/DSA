#include<iostream>
using namespace std;

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

    cout<<"Your name length is = " << lenName(ch) << endl;

    return 0;
}
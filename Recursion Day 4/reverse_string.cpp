#include<iostream>
using namespace std;
void reversee(string &name, int i, int j)
{
    //base case
    if(i>j)
    return;

    swap(name[i],name[j]);
    i++;
    j--;

    //recursion

    reversee(name,i,j);
    
}
int main()
{

    string name = "arman hingora";

    cout<<"before reverse string= "<<name<<endl;
    reversee(name,0,name.length()-1);

    cout<<"after revrese strign= "<<name<<endl;
 return 0;
}
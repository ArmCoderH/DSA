#include<iostream>
using namespace std;
class parent
{

    protected :
        int age = 10;
        char  ch = 'A';


}; 
class child : private parent
{

    public :
    void print()
    {
        cout<<"Age is= "<<age<<endl;
        cout<<"Blood Group is = "<<ch<<endl;;
    }

    // int get()
    // {
    //     return this-> age;
    // }
 
};
int main()
{

    child c1;
    cout<<c1.<<endl;
   // cout<<c1.ch;

 return 0;
}
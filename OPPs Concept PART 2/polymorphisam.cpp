#include<iostream>
using namespace std;
/*

<<<<<<<<<<<<function overloading>>>>>>>>>>>>
class A
{

    public :

    void arman()
    {
        cout<<endl;
        cout<<"My name is arman"<<endl;
    }

    void arman(int a)
    {
        cout<<endl;
        cout<<"My name is arman"<<endl;
    }

}; 
int main()
{

    A a1;
    a1.arman();

 return 0;
}
*/

class A
{

    public :
        int a = 10;
    
    void song()
    {
        cout<<"This song is best"<<endl;
    }

    void operator+ (A &obj2)
    {
        cout<<"Hello my name is arman"<<endl;
    }
};
int main()
{


    A obj1 , obj2;
    obj1 + obj2;
    return 0;

}

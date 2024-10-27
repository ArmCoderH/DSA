#include<iostream>
using namespace std;
class A
{

    public :

    void speak()
    {
        cout<<endl;
        cout<<"kuch bol na be !"<<endl<<endl;
    }
}; 
class B 
{

    public :

    void speak()
    {
        cout<<endl;
        cout<<"kuch sun na be !"<<endl<<endl;
    }

};
class C : public A, public B
{

};
int main()
{

    C c1;
    c1.A :: speak();
    c1.B :: speak();

 return 0;
}
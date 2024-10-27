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
class B : public A 
{


};
class C : public A
{

};
int main()
{

    B b1;
    C c1;
    c1.speak();
    b1.speak();

 return 0;
}
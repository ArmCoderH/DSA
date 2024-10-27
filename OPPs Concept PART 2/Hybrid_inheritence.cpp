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

    public :

        void song()
        {
            cout<<endl;
            cout<<"Aaj ki rat maja !"<<endl;
        }


};
class D
{

    public :
        void song()
        {
            cout<<"aaj ki rat maja "<<endl;
        }
};
class C : public A, public D
{

};

int main()
{

    B b1;
    C c1;
    D d1;
    c1.speak();
    c1.song();
    b1.speak();
    

 return 0;
}
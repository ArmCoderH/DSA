#include<iostream>
using namespace std;

class A
{

    public :
        void song()
        {
            cout<<endl;
            cout<<"Class A ka song strat !"<<endl;
        }

};
class B : public A
{

    public :
        // void song()
        // {
        //     cout<<endl;
        //     cout<<"Class B ka song strat !"<<endl;
        // }

};

int main()
{


    B obj1;
    obj1.song(); // when in b class song functon are available then used first B class fundtion other wise A class function

    return 0;
}
#include<iostream>
using namespace std;
class arman
{

    public :

    int name;
    int number;

    ~ arman()
    {
        cout<<"i am destructor"<endl;
    }
};
int main()
{

    arman h1;

 return 0;
}
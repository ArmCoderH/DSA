#include<iostream>
using namespace std;
class hero
{

    public :
        int number;
    
    void print()
    {
        cout<<"number is= "<<number;
    }

};


int main()
{

    hero h1;
    h1.number = 10;
    h1.print();
    
 return 0;
}
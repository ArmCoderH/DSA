#include<iostream>
using namespace std;

class hello
{

    public:

        int number;
        char ch = 'A';

    hello(int number)
    {
        this -> number = number;
    }

    void print()
    {
        cout<<number<<endl;
    }

};

int main()
{

    hello h1(10);
    h1.print();

    hello h2(h1);
    h2.print();


 return 0;
}
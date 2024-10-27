#include<iostream>
using namespace std;
class hero{

    private :
        int number;
    public :
        int age;


    int getNumber()
    {
        return number;
    }
    int setNumber(int n)
    {
        number = n;
    }
};
int main()
{
    hero h1;
    h1.age = 10;
    cout<<"age is="<<h1.age<<endl;

    /* when you  declare any properioes in privately 
    than you can not use out of class block*/

    //but using  getter and setter it's easyly access data
    h1.setNumber(10);
    cout<<"number is="<<h1.getNumber();

 return 0;
}
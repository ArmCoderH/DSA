#include<iostream>
using namespace std;
class hero{

  
    public :
        int age;
        int number;


    int getNumber()
    {
        return number;
    }
    int getAge()
    {
        return age; 
    }
    int setNumber(int n)
    {
        number = n;
    }
    int setAge(int a)
    {
        age = a;
    }
};
int main()
{
    //static object
    hero h1;

    h1.age = 10;
    h1.number= 40;

    cout<<"static age is="<<h1.age<<endl;
    cout<<"Dynamic age is="<<h1.number<<endl;


    //dynamic allocation using hap memory

    hero *h = new hero;

    (*h).setNumber(100);

    cout<<"dynamic no is="<<(*h).getNumber()<<endl;


    //dyamic with -> (arrow)

    h -> setAge(5);
    cout<<"dynamic age is="<<h->getAge()<<endl;
    

 return 0;
}
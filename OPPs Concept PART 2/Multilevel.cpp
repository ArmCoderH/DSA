#include<iostream>
using namespace std;
class animal
{

    public :
        int age;
        int wieght;

    void speak()
    {
        cout<<endl;
        cout<<"HELLO MOTO !"<<endl<<endl;
    }
}; 
class dog : public animal
{

};
class cow : public dog
{

};
int main()
{

    animal a1;
    dog d1;
    cow c1;

    //a1.speak();
    //d1.speak();
    c1.speak();

 return 0;
}
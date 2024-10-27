#include<iostream>
#include <cstring>
using namespace std;
class hero
{

    private :
        int health;
    
    public :
        char *name;
        char level;
    
    hero()
    {
        cout<<"Constructor is called !"<<endl;
        name = new char[100]; //heap memory allocation
    }

    //peramerized constructor

    hero(int health)
    {
        this -> health = health;
    }

    hero(int health, char level)
    {
        this -> health = health;
        this -> level - level;
    }

    void print()
    {
        cout<<"["<<"Health is = "<<this -> health<<" , ";
        cout<<"level is = "<<this->level<<" , ";
        cout<<"name is = "<<this -> name<<"]"<<endl;
    }
    int getHealth()
    {
        return health;
    }
    int setHealth(int h)
    {
        health = h;
    }

    int getlevel()
    {
        return level;
    }

    int setLevel(int ch)
    {
        level  =  ch;
    }


    int setName(char name[])
    {
        strcpy(this -> name, name);
    }

};
int main()
{


    hero h1;
    h1.setHealth(12);
    h1.setLevel('A');
    char name[7]= "Babber";
    h1.setName(name);
    h1.print();

    hero h2(h1);
    h2.name[0]='G';
    h2.print();

    h1.print();


    

 return 0;
}
#include<iostream>
using namespace std;
class hero{

    public:
        int number;
        char name[50] ="Hingora Arman" ;

    //constructor
        hero()
        {
            cout<<"Yes !"<<endl<<endl;
        }
    //paraeter constructor

        hero(int number)
        {
            //this -> number......denoted by class properties
            this -> number  = number; //this number is denoted by perameter;


        }

        void print()
        {
            cout<<number<<endl;
        }

}; 
int main()
{
    /*hero h1;
    hero h2;
    cout<<"number is = "<<h1.number<<endl;
    cout<<endl;
    cout<<"name is = "<<h1.name<<endl<<endl;*/

//static way
    hero h1(50);
 //  cout<<"Parameter constructor number is = "<<h1.number;
    h1.print(); 
 //dynamic way

    hero *hello = new hero(40); 
    //cout<< hello -> number;
    hello ->print();
   // cout<<"Dynamic parameter constructor number is= "<<(*h1).number;   
 return 0;
}
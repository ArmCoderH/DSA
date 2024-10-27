#include<iostream>
using namespace std;
class node
{

    public :
    int data;
    node* next;

    //cnstructor 
    node(int data)
    {
        this -> data = data;
        this -> next = next;
    }

}; 
int main()
{

    node* node1 = new node(10);
    // node n1;
    // cout<<n1.data<<endl;
    // cout<<n1.next;
   cout<<node1 -> data<<endl;
   cout<<node1 -> next <<endl;
}
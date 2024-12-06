#include<iostream>
#include<queue>
using namespace std; 
int main()
{
    deque <int> q;
    q.push_front(12);
    q.push_front(11);
    //cout<<q.front();

    //q.pop_front();
    //cout<<q.front();

    q.push_back(90);
    q.push_back(91);

    //cout<<q.back();

    q.pop_back();
    cout<<q.back();
 return 0;
}
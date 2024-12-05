#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;

    q.push(11);
    // cout<<"front is of queue is="<<q.front()<<endl;

    q.push(14);
    // cout<<"front is of queue is="<<q.front()<<endl;

    q.pop();
    // cout<<"front is of queue is="<<q.front()<<endl;

    q.pop();
    // cout<<"front is of queue is="<<q.front()<<endl;


    if(q.empty())
    {
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }
 return 0;
}
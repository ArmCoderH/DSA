#include<iostream>
using namespace std;
class node
{
    public:

    int data;
    node* prev;
    node* next;

    node(int data)
    {
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }
};
void print(node* head)
{
    node* temp = head;

    while(temp != NULL)
    {
        cout<< temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
} 
int getLen(node* &head)
{
    int len = 0;
    node* temp = head;

    while(temp != NULL)
    {
        //cout<< temp -> data;
        len++;
        temp = temp -> next;
    }
    return len;
}
void insertAtFirst(node* &head,int data)
{

    if (head == NULL)
    {
        node* temp = new node(data);
        head = temp;
    }
    else{

    node* newnode = new node(data);
    newnode -> next = head;
    //newnode -> prev = NULL;
    head -> prev = newnode;
    head = newnode;

    }

}
void insertAtLast(node* &last,int data)
{

    node* temp = last;
    while (temp->next != NULL)
    {
        
        temp = temp -> next;

    }

    if (last == NULL)
    {
        node* temp = new node(data);
        last = temp;
    }
    else
    {
        node* newnode = new node(data);
        newnode->next = NULL;
        newnode -> prev = temp;
        temp -> next = newnode;
    }
    
    

}
void postion(node* &last,node* head,int pos,int data)
{
    node* temp = head;
    int cnt = 1;
    if (pos == 1)
    {
        insertAtFirst(head,data);
        return;
    }
        
        while(cnt < pos-1)
        {
            temp = temp -> next;
            cnt++;
        }

    if (temp -> next == NULL)
    {
        insertAtLast(last,data);
    }
    node* newnode = new node(data);
    newnode -> next = temp -> next;
    newnode -> prev = temp;
    temp->next->prev = newnode;
    temp -> next = newnode;

}

int main()
{


    node* node1 = new node(10);

    node* head = node1;
    node* last = node1;
    print(head);

    //cout<<"Len is="<<getLen(head);

    insertAtFirst(head,30);
    print(head);

    insertAtLast(last,40);
    print(head);

    postion(last,head,2,55);
    print(head);

    cout<<"Len is="<<getLen(head);

 return 0;
}
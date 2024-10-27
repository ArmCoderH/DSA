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
        this -> next = NULL;
    }

    ~node()
    {
        int value = this -> data;
        if (this->next != NULL)
        {
            delete next;
            this -> next = NULL;
        }
        
        //cout<<endl;
        cout<<"memorey is frre"<<value<<endl;
    }

}; 
//insert at first
void insertAtFirst(node* &head, int data)
{

    //create new node
    node* temp = new node(data);
    temp -> next = head;
    head = temp;

}
void insertAtLast(node* &last, int data)
{

    //create new node
    node* temp = new node(data);
    last -> next = temp;
    last = temp;

}
void insertAtPos(node* &last,node* &head,int pos,int data)
{
    node* temp = head;
    int cnt = 1;

    //insert att first
    if (pos == 1)
    {
        insertAtFirst(head,data);
        return;
    }
    

    while (cnt<pos - 1)
    {
       
        temp = temp -> next;
        cnt++;
    }

    //insert at last
    if (temp -> next == NULL)
    {
        insertAtLast(last,data);
    }
    

    node* NewNode = new node(data);
    NewNode -> next = temp ->next;
    temp -> next = NewNode;
    
}
void deleteNode(int pos,node* &head)
{
    //for delete first node
    if(pos == 1)
    {
        node* temp = head;
        head = head ->next;

        temp ->next = NULL;
        delete temp;
    }
    else
    {
        
        node* preprev = head;
        node* pre = NULL;

        int cnt = 1;
        while (cnt < pos)
        {
            pre = preprev;
            preprev = preprev -> next;
            cnt++;
        }
        
        pre -> next = preprev -> next;
        preprev  -> next = NULL;
        delete preprev;


    }
}
void print(node* &head)
{

    node* temp = head;

    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp  = temp -> next;
    }
    cout<<endl;


}

int main()
{

    node* node1 = new node(10);
    // node n1;
    // cout<<n1.data<<endl;
    // cout<<n1.next;
   //cout<<node1 -> data<<endl;
   //cout<<node1 -> next <<endl;

   
   node* last = node1;
   node* head = node1;
  // print(head); 

//    insertAtFirst(head,12);
//    print(head);

   insertAtFirst(head,15);
   print(head);

   insertAtLast(last,12);
   print(head);

   insertAtLast(last,14);
   print(head);

   insertAtLast(last,44);
   print(head);

   insertAtPos(last,head,3,22);
   print(head);

    // cout<<"first is="<<head -> data<<endl;
    // cout<<"last is="<<last -> data<<endl;

    deleteNode(1,head);
    print(head);

     deleteNode(4,head);
    print(head);
   return 0;
}
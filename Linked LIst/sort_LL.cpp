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
node* sortList(node *head){
    int  zero = 0;
    int one = 0;
    int two = 0;

    node* temp = head;
    while(temp != NULL)
    {
            
        if(temp->data == 0)
        {
            zero++;
        }
        else if (temp->data == 1)
        {
            one++;
        }
        else if (temp->data == 2)
        {
            two++;
        }
        temp = temp -> next;
    }

    temp = head;
    while(temp != NULL)
    {
        if(zero != 0)
        {
            temp->data = 0;
            zero--;
        }
        else if(one != 0)
        {
            temp->data = 1;
            one--;
        }
        else if(two != 0)
        {
            temp->data = 2;
            two--;
        }
                temp = temp -> next;

    }
    return head;
}

int main()
{

    node* node1 = new node(1);
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

   insertAtFirst(head,2);
  // print(head);

   insertAtFirst(head,1);
   //print(head);

   insertAtFirst(head,0);
  // print(head);

   insertAtFirst(head,2);

   print(head);

   sortList(head);

   print(head);
  
   return 0;
}
#include<iostream>
#include<map>
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

node* remove_duplicate(node* head)
{
    if (head == NULL)
    {
        return NULL;
    }
    node* curr = head;
    while (curr != NULL)
    {
        if ((curr -> next != NULL) && curr -> data == curr -> next -> data)
        {
            node* nextTonext = curr -> next -> next; 
            node* deleteNode = curr -> next;
            delete deleteNode;
            curr -> next = nextTonext;
        }
        else
        {
            curr = curr -> next;
        }
        
    }
    return head;
    
    
}

int main()
{

    node* node1 = new node(1);

   node* last = node1;
   node* head = node1;

  
   insertAtLast(last,2);
 

   insertAtLast(last,2);
 

   insertAtLast(last,3);
   print(head);

    head = remove_duplicate(head);
    print(head);

    // Cleanup: Deleting all nodes to avoid memory leak
    delete head;


   

   return 0;
}
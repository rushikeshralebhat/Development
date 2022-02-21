#include<iostream>
using namespace std;
typedef struct node
{
   int data;
   struct node *next;
}NODE,*PNODE;

class Stack  //
{
  private:
    PNODE first;
    int size;

  public:
    Stack()
    {
       first=NULL;
       size=0; 
    }

    void push(int no)
    {
       PNODE newn =NULL;
       newn=(PNODE)malloc(sizeof(NODE));
       
       newn->data=no;
       newn->next=NULL;

       if(first==NULL)
       {
           first=newn;
       } 
       else
       {
           newn->next=first;
           first=newn;
       }
       size++;
    }
    int pop()
    {
        int no=0;
        PNODE temp=first;

       if(size==0)
       {
           return -1;
       }
       else if(size==1)
       {
           no=first->data;
           delete first;
           first = NULL;
       } 
       else
       {
           no = first->data;
           first=first->next;
           delete temp;
           
       } 
       size--;
       return no;
    }
    void Display()
    {   
       PNODE temp=first;
       while(temp !=NULL)
       {
           cout<<"|"<<temp->data<<"|"<<"\n";
           temp=temp->next;
       }  
       cout<<"\n";
    }
    int Count()
    {
     return size;
    }
};


int main()
{
   Stack obj; 
   int iRet=0;
   obj.push(11);
   obj.push(21);
   obj.push(51);
   obj.push(101); 
     
     cout<<"Elements if stack\n";
     obj.Display();

     iRet=obj.pop();
     cout<<"poped element is :"<<iRet<<"\n";
     
     cout<<"Element of stack\n";
     obj.Display();
     iRet=obj.Count();
     cout<<"Size of stack is :"<<iRet<<"\n";
  
     return 0;    
}
#include<iostream>
using namespace std;
typedef struct node
{
   int data;
   struct node *next;
}NODE,*PNODE;

class Queue  //
{
  private:
    PNODE first;
    int size;

  public:
    Queue()
    {
       first=NULL;
       size=0; 
    }

    void Enqueue(int no)
    {
      PNODE newn = NULL;
      PNODE temp = first;
      newn=(PNODE)malloc(sizeof(NODE));
      newn->data=no;
      newn->next=NULL;

      if(first==NULL)
      {
          first=newn;
      }
      else 
      {
           while(temp->next != NULL)
           {
               temp=temp->next;
           }
           temp->next=newn;
      }
      size++;
    }
    int Dequeue()
    {
      PNODE temp = first;
      int no=0;
      if(size==0)
      {
          return -1; 
      }
      else if(size==1)
      {
          no=temp->data;
          delete first;
          first=NULL;
      }
      else
      {
          no=temp->data;
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
           cout<<"|"<<temp->data<<"|->";
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
   Queue obj; 
   int iRet=0;
   obj.Enqueue(11);
   obj.Enqueue(21);
   obj.Enqueue(51);
   obj.Enqueue(101); 
    
    cout<<"Elements of Queue :\n";
    obj.Display();

    iRet=obj.Dequeue();
    cout<<"Removed element from"<<iRet<<"\n";

     obj.Display();
     iRet=obj.Count();
     cout<<"Size of stack is :"<<iRet<<"\n";
  
     return 0;    
}
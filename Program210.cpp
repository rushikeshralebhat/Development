
#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE,*PNODE,**PPNODE;

class SinglyLL
{
  private:
      PNODE first;
      int size;

  public:
      SinglyLL()
      {
          first=NULL;
          size=0;
      }

      void InsertFirst(int no)
      {
        PNODE newn = new NODE;

        newn->data = no;
        newn->next = NULL;

        if(first == NULL)
        {
            first = newn;
        }
        else
        {
            newn->next = first;
            first=newn;
        }
        size++;
      }
      void InsertLast(int no)
      {
        PNODE newn = new NODE;
        newn->data = no;
        newn->next = NULL;

        if(first == NULL)
        {
            first = newn;
        }
        else
        {
           PNODE temp = first;
           
            while(temp->next != NULL)
            {
                temp=temp->next;
            }
            temp->next=newn;
        }
        size++;    
      }
      void InsertAtPos(int no,int ipos)
      {
          PNODE newn = new NODE;
          newn->data=no;
          newn->next=NULL;
          newn->next=NULL;
          
          if((ipos < 1) || (ipos > size+1))  //filter
          {
              return;
          }
          if(ipos == 1)
          {
              InsertFirst(no);
          }
          else if(ipos == size+1)
          {
             InsertLast(no);
          }
          else
          {
              int i=0;
              PNODE temp = first;
              for(i=1;i<ipos-1;i++)
              {
                  temp = temp->next;
              }
              newn->next=temp->next;
              temp->next=newn;
              size++; 
          }
      }
      void DeleteFirst()
      {
         PNODE temp = first;
          if(first != NULL)
          {
             first=first->next;
             delete temp;

             size--;
          }
          
      }
      void DeleteLast()
      {
        PNODE temp = first;
          if(first == NULL)
          {
              return;
          }   
          else if(first->next == NULL)
          {
              delete first;
              first = NULL;
              size--;
          }
          else
          {
           int i=0;
           while(temp->next->next != NULL)
           {
               temp = temp->next;
           }
           delete temp->next;
           temp->next=NULL;
           size--;
          }
            
      }
      void DeleteAtPos(int ipos)
      {
          if((ipos < 1) || (ipos > size+1))  //filter
          {
              return;
          }
          if(ipos == 1)
          {
              DeleteFirst();
          }
          else if(ipos == size)
          {
              DeleteLast();
          }
          else
          {
              int i=0;
              PNODE temp = first;
              PNODE targated = NULL;
              for(i=1;i<ipos-1;i++)
              {
                  temp = temp->next;
              }
              targated=temp->next;
              temp->next=targated->next;
              delete(targated);
              size--; 
          }
      }
      void Display()
      {
         PNODE temp = first;
         while(temp != NULL)
         {
             cout<<temp->data<<"\t";
             temp = temp->next;
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
    SinglyLL obj;
    int iRet=0;
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);
    obj.InsertLast(111);
     
    obj.InsertAtPos(120,3); 
    obj.Display();

    iRet=obj.Count();
    cout<<"Number of element are :"<<iRet<<"\n";
    
    obj.DeleteFirst();
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of element are :"<<iRet<<"\n";

    obj.DeleteLast();
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of element are :"<<iRet<<"\n";

    obj.DeleteAtPos(3);
    obj.Display();
    iRet=obj.Count();
    cout<<"Number of element are :"<<iRet<<"\n";
  
    return 0;
}
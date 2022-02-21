#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
  int data;
  struct node *next;
}NODE,*PNODE,**PPNODE;

void Display(PNODE Head)
{
  while(Head != NULL)
  {
      printf("|%d|->",Head->data);
      Head = Head -> next;
  }
  printf("NULL\n");
}
int Count(PNODE Head)
{
    int iCnt=0;
  while(Head != 0)
  {
      iCnt++;
      Head= Head -> next;
  }
  return iCnt;
}
void InsertFirst(PPNODE Head,int no)
{
   PNODE newn = NULL;
   newn=(PNODE)malloc(sizeof(NODE));
   
   newn->data = no;
   newn->next = NULL;

   if(*Head == NULL)
   {
        *Head = newn;
   }
   else
   {
       newn -> next =*Head;
       *Head = newn;
   }

}
void InsertLast(PPNODE Head,int no)
{
   PNODE newn = NULL;
   PNODE temp = *Head;
   newn=(PNODE)malloc(sizeof(NODE));
   
   newn->data = no;
   newn->next = NULL;

   if(*Head == NULL)
   {
        *Head = newn;
   }
   else
   {
       while(temp->next != NULL)
       {
           temp=temp->next;
       }
       temp->next=newn;
   }
}   
void DeleteFirst(PPNODE Head)
{
   PNODE temp = *Head;
  if(*Head != NULL)
  {
      *Head=(*Head)->next;
      free(temp);
  }
}  
void DeleteLast(PPNODE Head)
{
   PNODE temp = *Head;
  if(*Head == NULL)
  {
      return;
  }
   else if((*Head)->next == NULL)
    {
          free(*Head);
          *Head=NULL;
    }
    else
    {
         while(temps->next->next != NULL)
         {
             temp = temp -> next;
         }
         free(temp->next);
         temp -> next = NULL;   
    }
}
void InsertAtPos(PPNODE Head,int no,int Pos)
{

}
void DeleteAtPos(PPNODE Head,int Pos)
{
    
}
int main()
{
    PNODE first =NULL;
    int iCnt=0;
    InsertFirst(&first,40);
    InsertFirst(&first,30);
    InsertFirst(&first,20);
    InsertFirst(&first,10);

    InsertLast(&first,50);
     
    Display(first);
    iCnt=Count(first);
    printf("Number of element %d\n",iCnt);
    
    DeleteFirst(&first);
    Display(first);
    iCnt=Count(first);
    printf("Number of element %d\n",iCnt);
 
    DeleteLast(&first);
    Display(first);
    iCnt=Count(first);
    printf("Number of element %d\n",iCnt);
       
       return 0;
}
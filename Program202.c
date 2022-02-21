#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;


int main()
{
    NODE obj;

     obj.data =11;
     obj.next = NULL;

    PNODE p = NULL;
    p = &obj;

    PPNODE q = NULL;
    q =&p;
    
    printf("%d\n",p);
    printf("%d\n",q);
    printf("%d\n",&p);
    printf("%d\n",&q);
    printf("%d\n",p->data);
    printf("%d\n",p->next);
    printf("%d\n",(*q)->data);
    printf("%d\n",(*q)->next    );

    printf("%d\n",&obj);
    printf("%d\n",obj);



    return 0;
}
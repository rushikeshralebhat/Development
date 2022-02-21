#include<iostream>
using namespace std;

void swap(char *p,char *q)
{
    char temp='\0';
    
     temp=*p;
     *p=*q;
     *q=temp;

}


int main()
{
   char x='\0',y='\0';

   cout<<"Enter first number\n";
   cin>>x;
    
   cout<<"Enter second number\n";
   cin>>y;
    
   swap(&x,&y);

   cout<<"Value of X becaomes"<<x<<"\n";
   cout<<"Value of Y becaomes"<<y<<"\n";

    return 0;
}

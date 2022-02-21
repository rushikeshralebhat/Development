#include<iostream>
using namespace std;

void swap(int *p,int *q)
{
    int temp=0;
    
     temp=*p;
     *p=*q;
     *q=temp;

}


int main()
{
   int x=0,y=0;

   cout<<"Enter first number\n";
   cin>>x;
    
   cout<<"Enter second number\n";
   cin>>y;
    
   swap(&x,&y);

   cout<<"Value of X becaomes"<<x<<"\n";
   cout<<"Value of Y becaomes"<<y<<"\n";

    return 0;
}

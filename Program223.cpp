#include<iostream>
using namespace std;

//Specific Function
void swap(int *p,int *q)
{
    int temp=0;
    
     temp=*p;
     *p=*q;
     *q=temp;

}
//Generic Funcation
template<class T>
void swapX(T *p,T *q)
{
    T temp;
    
     temp=*p;
     *p=*q;
     *q=temp;

}

int main()
{
   char x='A',y='B';

   swapX(&x,&y);
   cout<<"Value of X becaomes"<<x<<"\n";
   cout<<"Value of Y becaomes"<<y<<"\n";

   
   int i=11,j=21;

   swapX(&i,&j);
   cout<<"Value of i becaomes"<<i<<"\n";
   cout<<"Value of j becaomes"<<j<<"\n";
   
    return 0;
}

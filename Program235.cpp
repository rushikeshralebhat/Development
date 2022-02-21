#include<iostream>
using namespace std;
int factorilI(int iNo)
{
   int iFact=1; 
   
   while(iNo != 0)
   {
       iFact=iFact * iNo;
       iNo--;

   }
   return iFact;
}

int factorilR(int iNo)
{
static int iFact=1; 
   
   if(iNo != 0)
   {
       iFact=iFact * iNo;
       iNo--;
       factorilR(iNo); 
   }
   return iFact;
}
int main()
{
  int x=0,iRet=0;
  
  cout<<"Enter number\n";
  cin>>x;

   //iRet=factorilI(x);
   //iRet=SumR(x);
  iRet=factorilR(x);
   
  cout<<"Facorial is :"<<iRet<<"\n";
  return 0;
}
#include<iostream>
using namespace std;

/*int SumI(int Arr[],int iSize)
{
   int iCnt=0,iSum=0;
   for(iCnt=0;iCnt<iSize;iCnt++)
   {
       iSum=iSum + Arr[iCnt];
   }
   return iSum;
}*/


int SumR(int Arr[],int iSize)
{
   static int iCnt=0,iSum=0;
   if(iCnt<iSize)
   {
       iSum=iSum + Arr[iCnt];
       iCnt++;
       SumR(Arr,iSize);
   }
   return iSum;
}

int main()
{
    int iLength=0,i=0,iRet=0;
    int *p=NULL;
   
    cout<<"Enter number if element"<<"\n";
    cin>>iLength;

    p=new int[iLength];

    cout<<"Enter the element\n";
    for(i=0;i<iLength;i++)
    {
        cin>>p[i];
    } 
    
     iRet=SumR(p,iLength);

    cout<<"iSum is :"<<iRet;

    delete []p;



  return 0;
}
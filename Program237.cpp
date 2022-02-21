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


int SumI(int Arr[],int iSize)
{
   int iCnt=0,iSum=0;
   while(iCnt<iSize)
   {
       iSum=iSum + Arr[iCnt];
       iCnt++;
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
    
     iRet=SumI(p,5);

    cout<<"iSum is :"<<iRet;

    delete []p;



  return 0;
}
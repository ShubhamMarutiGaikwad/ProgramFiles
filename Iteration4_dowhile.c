#include<stdio.h>
int main()
{
   int iCnt=0;

   iCnt=1;                         //1
   do
   {
    printf("Jay Ganesh...\n");     //4

    iCnt++;                        //3

   } while (iCnt<=4);              //2
   
    return 0;
}

/*
1=counter initialisation
2=loop condition
3=loop displacement
4=loop body
*/
#include<stdio.h>
struct Demo
{
   int i;
   float j;
   int arr[5];
};

int main()
{  
    struct Demo obj;
    obj.i=10;
    obj.j=20.20;
    //obj.arr={10,20,30,40,50}
    obj.arr[0]=10;
    obj.arr[1]=20;
    obj.arr[2]=30;
    obj.arr[3]=40;
    obj.arr[4]=50;


    printf("value of i is: %d \n",obj.i);
    printf("value of i is: %f \n",obj.j);

    for(int iCnt=0;iCnt<=4;iCnt++)
    {
      printf("value of arr is: %d \n",obj.arr[iCnt]);
    }

   // printf("value of i is: %d \n",obj.arr[1]);
    return 0;
}
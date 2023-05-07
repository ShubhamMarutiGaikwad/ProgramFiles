#include<stdio.h>

int Addition(int no1,int no2)    // 1000 from text section
{
    int ans =0;
    ans=no1+no2;
    return ans;
}
int main()
{
   int value1=10;
   int value2=11;
   int ret=0;

   int(*ptr)(int,int);

   ptr=Addition;

   // ret=Addition(value1,value2);

   ret=ptr(value1,value2);

   printf("%d\n",ret);    //21






    return 0;
}
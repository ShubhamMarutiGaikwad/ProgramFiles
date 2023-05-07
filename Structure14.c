/*to avoid the memory the wastage when we use character in our structure we use the concept of #pragma pack()
(1)this value inside bracket instruct the compiler to give memory in segment of 1byte. we can give the value as1,2,4 & 8, but the best practice is to give 1
   to avoid padding*/
  
#include<stdio.h>

#pragma pack(1)

struct Demo
{
    int no;
    char ch;
    float f;
    int i;
};

int main()
{

    struct Demo obj;

    printf("size of Demo structure is:%d\n",sizeof(obj));

    return 0;
}
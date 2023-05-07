#include<stdio.h>
int main()
{   
    int no=10;
    int *iptr=&no;

    char ch='A';
    char *cptr=&ch;

    double d=89.89;
    double *dptr=&d;

    printf("value of no is:%d \n",no);
    printf("Value of ch is:%c \n",ch);
    printf("value of d is:%f \n",d);

    printf("address of no is:%d \n",&no);
    printf("address of ch is:%d \n",&ch);
    printf("address of d is:%d \n",&d);

    printf("address of iptr is:%d \n",&iptr);
    printf("address of cptr is:%d \n",&cptr);
    printf("address of dptr is:%d \n",&dptr);

    printf("Integer pointer holds value:%d \n",*iptr);
    printf("Character pointer holds value:%c \n",*cptr);
    printf("Double pointer holds value:%f \n",*dptr);

    return 0;
}
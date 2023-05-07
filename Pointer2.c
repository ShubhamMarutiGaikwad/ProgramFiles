#include<stdio.h>
int main()
{  
    int no=11;
    int *p=&no;
    int **q=&p;
    int ***r=&q;
    int ****a=&r;
    int *****b=&a;
    int ******c=&b;

    printf("The size of no is:%d \n",sizeof(no));  //4
    printf("Address of no is:%d\n",&no);          
    printf("Address of a is:%d\n",&a); 
    printf("The size of r is:%d \n",sizeof(r));
    printf("The size of c is:%d \n",sizeof(c));
    printf("The size of *p is:%d \n",sizeof(*p));
    printf("Address of q is:%d\n",&q); 
    printf("Address of c is:%d\n",&c); 
    printf("pointer p holds value :%d\n",*p);
    printf("pointer q holds value :%d\n",**q);
    printf("pointer b holds value :%d\n",****b);
    printf("pointer c holds value :%d\n",******c);
    printf("pointer c holds value :%d\n",**c);

        








  return 0;  
}
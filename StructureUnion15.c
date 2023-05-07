/*if we create union then the memory for the union gets allocated for its largest member. as the memory allocated only for one member 
you can store only one value at a time. But in structure we can store all elements simultaneously*/
#include<stdio.h>

union Demo
{
   int no;
   double d;
   float f;
};

int main()
{

    union Demo obj;

    printf("The size of union is: %d\n",sizeof(obj));
    
    obj.no = 11;

    printf("The value of no is: %d\n",obj.no);  // 11

    obj.f = 90.99;

    printf("The value of f is: %f\n",obj.f);  // 90.99

    return 0;
}
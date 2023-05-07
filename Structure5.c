#include<stdio.h>

struct Demo
{
    int i;
    float f;
};

int main()
{
    // Arr is one dimentional array which contains 4 elements and each element is of type  strcut Demo.
    // Where Demo is a structure which contains 2 members one as integer and other as float.
     struct Demo Arr[4];

    Arr[0].i = 11;
    Arr[0].f = 90.0;

    Arr[1].i = 21;
    Arr[1].f = 95.0;

    Arr[2].i = 31;
    Arr[2].f = 97.0;

    Arr[3].i = 41;
    Arr[3].f = 99.0;

    printf("Value of i is:%d \n",Arr[0].i);
    printf("Value of i is:%f \n",Arr[0].f);

    printf("Value of i is:%d \n",Arr[1].i);
    printf("Value of i is:%f \n",Arr[1].f);

    printf("Value of i is:%d \n",Arr[2].i);
    printf("Value of i is:%f \n",Arr[2].f);

    printf("Value of i is:%d \n",Arr[3].i);
    printf("Value of i is:%f \n",Arr[3].f);

    







    return 0;
}



/*
// Direct member initialisation
obj1.i=11;
obj1.f=90.90;
obj1.j=51;

//Indirect member initialisation
ptr->i=11;
ptr->f=90.90;
ptr->j=51;


*/



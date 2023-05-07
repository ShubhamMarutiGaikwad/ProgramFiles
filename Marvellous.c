#include<stdio.h>      // inbuilt header file must be in angular bracket if the header is in location where the gcc in installed

#include "PPA.h"       // user defined header file must written in double quote if the header file is in same folder where the .c file is created

int main()
{  
    struct Demo obj;

    printf("Inside main \n");

    printf("Rate if intrest is: %f\n",ROI);    //10.7

    printf("fees of logic building batch %d\n",FEES);   //18200

    printf("size of demo structure is: %d\n",sizeof(obj));   //8
 

    return 0;
}
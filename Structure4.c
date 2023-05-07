#include<stdio.h> 
struct Demo
{
    // we can create array inside the structure as it's member
    int i;
    float f;
    int arr[4];

};

int main()
{
    struct Demo obj;

    obj.i=10;
    obj.f=90.88;
    obj.arr[0]=11;
    obj.arr[1]=21;
    obj.arr[2]=31;
    obj.arr[3]=41;

    printf("value of i is: %d \n",obj.i);
    printf("value of f is: %f \n",obj.f);
    printf("members of array are as follow: \n ");

     int iCnt=0;
     for(iCnt=0;iCnt<=3;iCnt++)
     {
        printf(" member value is: %d \n",obj.arr[iCnt]);
        
     }

    // printf("1st member value is: %d \n",obj.arr[0]);
    // printf("2nd member value is: %d \n",obj.arr[1]);
    // printf("3rd member value is: %d \n",obj.arr[2]);
    // printf("4th member value is: %d \n",obj.arr[3]);
   



    
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



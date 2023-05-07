#include<stdio.h>
int main()
{
   int arr[4]={10,20,30,40};

   printf("value at 0th index %d \n",arr[0]);
   printf("value at 2nd index %d \n",arr[2]);
   printf("value at 3rd index %d \n",arr[3]);

   printf("size of the array is: %d \n",sizeof(arr));
   printf("Size of the 0th index member is %d \n",sizeof(arr[0]));

   printf("Base address of array is %d \n",arr);
   printf("Base address of array is %d \n",&arr);
   printf("Base address of array is %d \n",&arr[0]);

   printf("BAse address of 2nd memebr in array is %d \n",&arr[2]);
   printf("BAse address of 3rd memebr in array is %d \n",&arr[3]);


   for(int i=0;i<4;i++)
   {
    printf("Values of array are %d \n",arr[i]);
   }
   
   return 0;
}
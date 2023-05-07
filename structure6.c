// we cannot create the object of same structure inside the structure

/*1-because the compiler don't the exact size of the structure and unable to assign memory for it.  
  2-this is happening because the declaration of structure is incomplete till line no 13.Declaration ending at line no 13 and before its declaration we
   are using in structure.
*/

#include<stdio.h>
struct Demo
{
   int i;
   int j;
   struct Demo obj;      // not allowed 
};

int main()
{
    struct Demo obj;    // allowed
  

    return 0;
}
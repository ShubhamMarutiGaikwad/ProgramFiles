#include<iostream>
using namespace std;

class maxint
{
    public:
    int No1;
    int No2;
    result()
    {  
       int result=0;
       cout<<"Enter 1st number:";
       cin>>No1;
       cout<<"Enter 2nd number:";
       cin>>No2;
       if(No1>No2)
       {
        result=No1;
       }
       else
       {
        result=No2;
       }

       //return result;
    }


};

int main()
{
    maxint mobj;
    mobj.result;

    return 0;
}
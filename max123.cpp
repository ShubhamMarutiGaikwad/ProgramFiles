#include<iostream>
using namespace std;

class Demo
{
    public:
        int No1;
        int No2;

        Demo(int A, int B) // Parametrised constructor
        {
            cout<<"Inside parametrised constructor\n";
            No1 = A;
            No2 = B;
        }

        int maxno()
        {
            int result=0;
            if(No1>No2)
            {
                cout<<"Maximum number  is : "<<No1<<"\n";
            }
            else
            {
                cout<<"Maximum number  is : "<<No2<<"\n";
            }

        }

        

       
};

int main()
{
    cout<<"Inside main\n";
    Demo obj2(11,21);
    obj2.maxno;
    

    

    return 0;
}
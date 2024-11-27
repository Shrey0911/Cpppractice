#include<iostream>
using namespace std;

int GcdNum(int num)
{ int h=0;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        {
            h=i;
        }
       
    }
    return h;
}

int main()
{
    cout<<GcdNum(10);
    return 0;
}
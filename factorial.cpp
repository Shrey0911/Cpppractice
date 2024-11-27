#include<iostream>
using namespace std;


int facto(int n){
    if(n==0){
        return 1;
    }
    else
    {
         return  (n)*facto(n-1);
    
    }
}

int main()
{
    int factonum = facto(10);
    cout<<factonum;
    return 0;    

}
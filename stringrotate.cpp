#include<iostream>
 #include<string>
using namespace std;

string strrev(string Str)
{
    int strlen = Str.length();
    cout<<strlen<<endl;
    for(int i=0; i<strlen/2;i++){
        for(int j = strlen-1;j>strlen/2;--j){
            swap(Str[i],Str[j]);    
        }
    }
        return Str; 
    }

int main (){

    string var="Tanisha";

    cout<<strrev(var);
    // cout <<"Shresth"<<endl;
    return 0;
}

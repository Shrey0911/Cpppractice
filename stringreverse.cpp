#include <iostream>
using namespace std;

string rev(string input){
    int n = input.length();
    for(int i = 0;i<n/2;i++){
        char temp = input[i];
        input[i] = input[n-i-1];
        input[n-i-1] = temp; 
    }
    return input;
}


int main()
{
    string var="Narayan";
    cout<<rev(var);
    return 0;
}
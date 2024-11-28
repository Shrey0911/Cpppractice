#include <iostream>
using namespace std;

void recur(int);

int main(){
	recur(1);
	cout<<endl;
}

void recur(int num){
    if(num>10){  //stopping recursion to go into infinite loop
        return;
    }
	cout<<num<<" "; 
	recur(num + 1); //Recursive call to infinity as ther is no stopping condition here
}

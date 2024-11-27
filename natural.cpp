#include <iostream>
using namespace std;
int onetoten(int n){
if(n==1){
    cout<<n<<endl;
    return 1;
}
else{
    cout<<n<<endl;
    onetoten(n-1);
}
}
int main(){
    int num = 10;
    onetoten(num);
    return 0;
}

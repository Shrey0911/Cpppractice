#include<iostream>
using namespace std;

struct Sample{
    int data;
    string name;
    string puttingname(string name);
    int puttingdata(int data);
};

int main()
{
    Sample instance;
    cout<<instance.puttingname("Shrey")<<endl;

    cout<<instance.puttingdata(923949)<<endl;
    return 0;
}

string Sample::puttingname(string name)
{
    this->name = name;
    return name;
}

int Sample::puttingdata(int data)
{
    this->data = data;
    return data;
}

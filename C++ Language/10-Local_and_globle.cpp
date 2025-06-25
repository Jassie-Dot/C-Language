#include<iostream>
using namespace std;

//Global variable declaration
int g=20;

int main()
{
    //Local variable declaration
    int g=10;
    cout<<"Value of g(Local Variable): "<<g<<endl;

    cout<<"Value of (global variable): "<< ::g;

    return 0;
}
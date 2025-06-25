/*
    Global Variable are defined outside of all the functions , usually on top of the program. The global variable will hold their value throughout the life-time of your program.  

    A global variable can be accessed by any function. That is a global variable is available is available for use throughout your entire program after its declaration.  
*/

#include<iostream>
#include<stdio.h>
using namespace std;
// Globle variable
int g;

int main()
{
    // Local variable declaration
    int a,b;

    // actual initialization
    a=10;
    b=20;
    g=a+b;

    cout<<g;

    return 0;
}
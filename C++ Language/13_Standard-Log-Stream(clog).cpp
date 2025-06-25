/*
    The predefied object clog is an instance of ostream class. The clog object is said to be attached to the standard error device, which is also display screem but the obect clog is buffered. This means that each insertion to clog could cause its output to be help in a buffer until the buffer is filled or until the buffer is flushed.

    The clog is also used in conjunction with the stream insertion operator as shown in followung example.  
*/
#include<iostream>
using namespace std;
int main()
{
    char str[]="Unable to read....";

    clog<<"Error message: "<<str<<endl;

    return 0;
}
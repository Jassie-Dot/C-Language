/*
    Boolean datatyeps are used for:-
        * In conditions where we need to have binary values 
        * When we need to run loops based on certain conditions we use bool data types.
        * In case of having null values, we generally relate them to bool data types.
        * For compairing two values for equality or inequality, we gernally use bool data types.
    
*/
// #include<iostream>
// using namespace std;
// int main()
// {
//     bool flag;
//     flag=1; // this is true 
//     cout<<flag;

//     return 0;
// }

#include<iostream>
using namespace std;

int main()
{
    bool flag;
    flag=1;
    bool flag1=true;

    cout<<flag<<" "<<flag1<<endl;

    int count=0;
    int x=12;
    float y=35.45;
    bool k=count, k1=x, k2=y;
    int sum=x+flag+flag1;

    cout<<k<<" "<<count<<" "<<k1<<" "<<x<<" "<<k2<<" "<<y<<" "<<endl;

    cout<<"After adding Boolean and integer values : "<<sum<<endl;

    return 0;
}
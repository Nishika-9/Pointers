#include<iostream>
using namespace std;
int main()
{
    float var1= 3.46;
    float *ptr= &var1;

    cout<<var1<<endl;     //value of var
    cout<<*ptr<<endl;     //value of address given by ptr
    cout<<&var1<<endl;    //address of var
    cout<<ptr<<endl;      //value of ptr
    cout<<&ptr<<endl;     //value of ptr

    return 0;

}
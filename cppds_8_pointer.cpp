#include<iostream>
using namespace std;
int main()
{
    int i;
    char str[20];
    char *ptr=str;
    cout<<"Enter your name:"<<endl;
    cin.get(str,20);
    cout<<str<<endl;

    i=0;
    while(*ptr!='\0')
    {
        ptr++;
    }
    cout<<"The number of characters are: ";
    cout<<*ptr;

    return 0;
}


#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    char str[50];
    int i,count=0;
    cout<<"enter the character";
    cin>>str;
    for(i=0;str[i]!='\0';i++)
    {
        count++;
    }
    cout<<"the length of the string is "<<count;
    return 0;

}
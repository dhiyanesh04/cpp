#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,count=0;
    char str[50],a;
    cout<<"enter the string";
    cin>>str;
    cout<<"enter the character ";
    cin>>a;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==a)
         count++;
    }
    if(count==0)
    {
        cout<<"entered charecter is not found";
    }
    else
    {
        cout<<"occurance of character in the string is  "<<count<<" times";
    }
    return 0;


}
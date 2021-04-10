#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
    char str[50];
    int i,j,count=0,temp;
    cout<<"enter the string";
    cin>>str;
    for(i=0;str[i]!='\0';i++)
    {
        count++;
    }
    cout<<"the length of the string is "<<count<<endl;
     for(i=0,j=count-1;i<j;i++,j--)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    cout<<str;
    return 0;

}
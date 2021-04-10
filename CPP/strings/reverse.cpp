#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    char str1[50],str2[50];
    int i,j;
    cout<<"enter the 1st string";
    cin>>str1;
    cout<<str1;
    for(i=0;str1[i]='\0';i++)
    {
    }
    i=i-1;
    for(j=0;i>=0;i--,j++)
    {
        str2[j]=str1[i];
    }
    str2[j]='\0';
    cout<<str2;
    return 0;
}
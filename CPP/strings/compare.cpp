#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i,j,flag;
    char str1[50],str2[50];
    cout<<"enter the first string";
    cin>>str1;
    cout<<"enter the second character";
    cin>>str2;
    while(str1[i]!=0)
    {
    i++;
    }
    while(str2[j]!=0)
    {
    j++;
    }
    if(i!=j)
    {
        flag=0;
    }
    else 
    {
        for(i=0,j=0;str1[i]!='\0',str2[j]!='\0';i++,j++)
        {
            if(str1[i]==str2[j])
            {
                flag=1;
            }
        }
    }
    if(flag==0)
    {
        cout<<"strings are not equal";
    }
    else{
        cout<<"stringa are equal";
    }
    return 0;



}

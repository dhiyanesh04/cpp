#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"enter the two values";
    cin>>a>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"the swapped values : "<<a<<" and "<<b;
    return 0;
    }
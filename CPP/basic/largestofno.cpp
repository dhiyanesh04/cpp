#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter the values";
    cin>>a>>b>>c;
    if(a>b && a>c)
    {
        cout<<"a is greater";
    }
    else if (b>c && b>a)
    {
        cout<<"b is greater";
    }
    else
    cout<<"c is greater";
return 0;
}
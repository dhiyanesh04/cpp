#include<iostream>
using namespace std;
int add(int x,int y);
int main()
{
    int a,b;
    cout<<"enter the values";
    cin>>a>>b;
    cout<<"added vales"<<add(a,b);
    return 0;
}
int add(int x,int y)
{
    return x+y;
}
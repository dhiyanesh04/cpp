#include<iostream>
using namespace std;
int main()
{
    int i,n,fact;
    cout<<"enter the number";
    cin>>n;
    fact=1;
    for(i=1;i<=n;i++)
    {
     fact=fact*i;
    }
    cout<<"factorial of the given number is"<<fact;
    return 0;
}
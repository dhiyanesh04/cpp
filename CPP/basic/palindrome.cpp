#include<iostream>
using namespace std;
int main()
{
    int n,a,r,rev=0;
    cout<<"enter the number :";
    cin>>n;
    a=n;
    while(a>0)
    {
        r=a%10;
        rev=rev*10+r;
        a=a/10;
    }
    if(n==rev)
    {
        cout<<"palindrome";
    }
    else
    cout<<"not palindrome";
return 0;
}

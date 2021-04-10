#include<iostream>
using namespace std;
int main()
{
    int a[10]={2,5,7,9,10};
    int i,x;
    cout<<"enter the element";
    cin>>x;
    for(i=4;a[i]>x;i--)
    {
        a[i+1]=a[i];
    }
    a[i+1]=x;
    for(i=0;i<6;i++)
    {
        cout<<a[i];
    }
 return 0;

}
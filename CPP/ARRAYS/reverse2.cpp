#include<iostream>
using namespace std;
int main()
{
    int a[50],i,temp,size,j;
    cout<<"enter the size of the array";
    cin>>size;
    cout<<"enter the elements";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    for(i=0,j=size-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    cout<<"array after reversing";
    for(i=0;i<size;i++)
    {
        cout<<a[i];
    }
    return 0;
}

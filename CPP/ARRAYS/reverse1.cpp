#include<iostream>
using namespace std;
int main()
{
    int a[50],b[50],size,i,j;
    cout<<"enter the size"<<endl;
    cin>>size;
    cout<<"enter the elements"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"ARRAY before revresing"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<a[i];
    }
    cout<<"array after reversing"<<endl;
    for(i=size-1,j=0;i>=0;i--,j++)
    {
        b[j]=a[i];
    }
    for(i=0;i<size;i++)
    {
        a[i]=b[i];
    }
    for(i=0;i<size;i++)
    {
        cout<<a[i];
    }
    return 0;

    
}
#include<iostream>
using namespace std;
int main()
{
    int a[50],i,j,r,size,temp;
    cout<<"enter the size of an array";
    cin>>size;
    cout<<"enter the elemets";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the number of rotations";
    cin>>r;
    for(i=0;i<r;i++)
    {
        temp=a[i];
        for(j=0;j<size-1;j++)
        {
            a[j]=a[j+1];
        }
        a[j]=temp;
        
    }
    for(i=0;i<size;i++)
    {
        cout<<a[i];
    }
    return 0;
}
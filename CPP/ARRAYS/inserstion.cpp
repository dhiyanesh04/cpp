#include<iostream>
using namespace std;
int main()
{
    int a[50],i,size,pos,ins;
    cout<<"enter the size";
    cin>>size;
    cout<<"enter the elements";
    for(i=0;i<size;i++)
    {
        cin>>a[i];

    }
    cout<<"enter the element you want to insert";
    cin>>ins;
    cout<<"eneter the postion";
    cin>>pos;
    for(i=size-1;i>=pos;i--)
    {
        a[i+1]=a[i];
    }
    a[pos]=ins;
    for(i=0;i<size+1;i++)
    {
        cout<<a[i];

    }
    return 0;


   
}
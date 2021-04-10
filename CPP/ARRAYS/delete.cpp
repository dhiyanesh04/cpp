#include<iostream>
using namespace std;
int main()
{
    int a[50],size,i,del,pos;
    cout<<"Enter the size";
    cin>>size;
    cout<<"Enter the elements";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element you want to delete";
    cin>>del;
    for(i=0;i<size;i++)
    {
        if(a[i]==del)
        {
            pos=i;
            break;
        }
    }
    
    for(i=pos;i<=size;i++)
    {
        a[i]=a[i+1];
    }
    
    for(i=0;i<size-1;i++)
    {
        cout<<a[i];
    }
    return 0;
}
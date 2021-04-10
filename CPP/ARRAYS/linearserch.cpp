#include<iostream>
using namespace std;
int main()
{
    int a[50],i,size,k;
    cout<<"enter the size";
    cin>>size;
    cout<<"enter the elements";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the element ";
    cin>>k;
    for(i=0;i<size;i++)
    {
        if(k==a[i])
        {
        cout<<"element found at"<<i;
        break;
        }
    }
    if(i==size)
    cout<<"key is not present";
    
    return 0;
}


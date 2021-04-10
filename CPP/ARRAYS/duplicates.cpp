#include<iostream>
using namespace std;
int main()
{
    int a[50],size,i,j;
    cout<<"enter the size";
    cin>>size;
    cout<<"enter the elements in an array";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
            {
                cout<<"the duplicate is "<<a[i];
            }
        }
    }
    return 0;
    
}  
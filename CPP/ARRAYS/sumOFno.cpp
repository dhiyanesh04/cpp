#include<iostream>
using namespace std;
int main()
{
    int a[50],i,size,sum=0;
    cout<<"enter the size";
    cin>>size;
    cout<<"enter the elements";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<size;i++)
    {
        sum+=a[i];
    }
    cout<<"sum of all elements in an array "<<sum;
    return 0;

}
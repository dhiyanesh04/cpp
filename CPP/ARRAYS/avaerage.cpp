#include<iostream>
using namespace std;
int main()
{
    float a[50],size,sum;
    int i;
    float ave;
    cout<<"enter the size";
    cin>>size;
    cout<<"enter the values";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    sum=0;
    for(i=0;i<size;i++)
    {
        sum+=a[i];
    }
    ave=sum/size;
    cout<<"average of array : "<<float(ave)<<endl;
    return 0;
    
}
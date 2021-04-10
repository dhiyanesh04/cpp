#include<iostream>
using namespace std;
int main()
{
    int a[50],i,size;
    cout<<"enter the size";
    cin>>size;
    cout<<"enter the elements";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<size;i++)
    {
        if(a[i]%2==0)
        {
            cout<<"this no. is even :"<<a[i]<<endl;
        }
        else{
            cout<<"this no. is odd :"<<a[i]<<endl;
        }
    }
    return 0;
    
}
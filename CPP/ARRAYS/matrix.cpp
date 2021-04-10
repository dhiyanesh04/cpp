#include<iostream>
using namespace std;
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j;
    cout<<"enter the value of 1st matrix ";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"enter the value of 2nd matrix";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j] = a[i][j]+b[i][j];
        }
    }
    cout<<"added matrix";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"\t"<<c[i][j];
        }
        cout<<"\n";
    }
    
    
    return  0;
 
}
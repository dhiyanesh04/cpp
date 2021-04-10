#include<iostream>
using namespace std;
int main()
{
    int a[3][3],b[3][3],c[3][3],i,j,k,sum;
    cout<<"enter the first matrix";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"enter the second matrix";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<"multiplication of two matrices : "<<endl;
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        
        {
            sum=0;
           for(k=0;k<3;k++)
           {
               sum=sum+a[i][k]*b[k][j];
           }
           c[i][j]=sum;

           

        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"\t"<<c[i][j];
        }
        cout<<("\n");
    }
    return 0;
    
    
    
}
#include<iostream>
using namespace std;
int main()
{
    int i,j,a[50],size,temp;
    cout<<"enter the size";
    cin>>size;
    cout<<"enter the elements";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"the numbers u have entered"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    {
       for(i=0;i<size;i++)
     {
        for(j=i+1;j<size;j++)
        
        {   if(a[i]>a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
      }
    }


    cout<<"elements in ascending order"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}
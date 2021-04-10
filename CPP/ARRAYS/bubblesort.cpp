#include<iostream>
using namespace std;
int main()
{
    int a[10],n,i;
    cout<<"enter array size";
    cin>>n;
    cout<<"enter elements in the array";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<n-1;i++)
    {   
        for(int j=0;j<n-i-1;j++ )
      {
        if(a[j]>a[j+1])
        {
            
            int temp;
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;

            
        }
      }
    
    }

    cout<<"elements after sorting ";
    for(i=0;i<n;i++)
    {
      cout<<a[i]<< " ";

    }
    return 0;
}


    



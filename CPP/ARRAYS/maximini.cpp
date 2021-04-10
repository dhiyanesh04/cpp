#include<iostream>
using namespace std;
int main()
{
    int i,a[50],size,largest,min;
    cout<<"enter the size"<<endl;
    cin>>size;
    cout<<"enter the elements"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>a[i];

    }
    largest=a[0];
    for(i=0;i<size;i++)
    {
        if(a[i]>largest)
        {
            largest=a[i];
        }
    }
    cout<<"maximum element in an array is :"<<largest<<endl;
    min=a[0];
    for(i=0;i<size;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
   cout<<"minimum element in an array is :"<<min;


    return 0;
}
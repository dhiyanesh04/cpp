#include <iostream>
using namespace std;
int main()
{
    int i,size,a[50];
    cout<<"enter the size"<<endl;
    cin>>size;
    cout<<"enter the elements"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }

    cout<<"entered array of elements"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<" "<<a[i]<<" ";
    }
    cout<<"reversed array of elements"<<endl;
    for(i=size-1;i>=0;i--)
    {
        cout<<" "<<a[i]<<" ";
    }
    return 0;

    
}
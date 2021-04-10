#include <iostream>
using namespace std;
int main()
{
    int i,size,a[50];
    cout<<"enter the size of the array";
    cin>>size;
    cout<<"enter the elements in an array";
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"the first element in an array : "<<a[0]<<" "<<" the last element in an array : "<<a[size-1]<<endl;
    cout<<"all elements in the array"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
 return 0;
}
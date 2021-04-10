#include<iostream>
using namespace std;
int main()
{
    int i,n,a=0;
    cout<<"enter the number";
    cin>>n;
    i=n;
    while(i>0)
   {  i=i/10;
        a++;
    }
 cout<<"no. of digits inthe number is"<<a;
 return 0;
}
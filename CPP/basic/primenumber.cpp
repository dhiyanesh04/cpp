#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter the number : ";
    cin>>n;
    if(n==1)
    {
        cout<<"the smallest prime number is 2";
    }
    for(i=2;i<n;i++)
    {
        if(n%i==0)

        {
        cout<<"it is not a prime number";
        break;
        }
        
    }
    if(n==i)
    {
       cout<<"it is a prime";
    }   
    
  return 0;

}
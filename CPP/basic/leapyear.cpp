#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"enter the year : ";
    cin>>a;
    if(a%100==0)
    {
        if(a%400==0)
        cout<<"it is a leap year";

    }
    else
    {
        if(a%4==0)
        {
            cout<<"it is a leap year";
         }
       else 
       {
         cout<<"not a leap year";
         }    
    }
    return 0;

}
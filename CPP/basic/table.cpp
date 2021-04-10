#include<iostream>
using namespace std;
int main()
{
    int i,a,n;
    cout<<"enter the number";
    cin>>n;
    for(i=1;i<=10;i++)
    {
        a=n*i;
        cout<<n<<" x "<<i<<" = "<<a<<endl;
    }
    return 0;
}
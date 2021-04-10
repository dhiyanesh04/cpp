#include<iostream>
using namespace std;
int main()
{
    int N ,A[20];
    cin>>N;
    for(int i;i<=N;i++)
    {
       cin>>A[i]; 
    }
    for(int j=N-1;j>=N;j--)
    {
        cout<<A[j];
    }
    return 0;
    
}

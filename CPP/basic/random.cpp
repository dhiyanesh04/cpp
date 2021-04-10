#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
    int i;        
    int num;        

    cout<<"Generating Random Numbers Below :: \n\n";
    srand(time(0));
    for(i=1;i<=10;i++)
    {
        num=rand()%100; //get random number
        cout<<" "<<num<<" ";
    }

    cout<<"\n";

    return 0;
}
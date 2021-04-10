#include<iostream>
using namespace std;
int main()
{
    int inches,feet,yards,a,b;
    cout<<"enter inches feet and yards";
    cin>>inches>>feet>>yards;
    a=inches/36;
    b=feet*12;
    cout<<"inches into yards : "<<a<<endl;
    cout<<"feet to inches : "<<b;
    return 0;

}
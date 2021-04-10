#include<iostream>
#include<string>
using namespace std;
void name(string stupid);
int main()
{
    name("kevin");
    name("sow");
    name();

    return 0;
}
void name(string stupid="eashwar")
{
    cout<<stupid<<"hello"<<endl;
}


#include<iostream>
#include<string>
using namespace std;
void function(string name,int age);

int main()
{
    function("kev",3);
    function("sow",5);
    return 0;

}
void function(string name = "eahu", int age = 3)
{
    cout<<name<<" age is "<<age<<endl;
}
#include<iostream>>
#include<string.h>
using namespace std;
int main(){
     char str1[50],str2[50];
    int i,j,count=0;
    cout<<"string1";
    cin>>str1;
    cout<<"string2";
    cin>>str2;
    for(i=0;str1[i]!='\0';i++)
    {
        count++;
    }
    for(i=count-1,j=0;j!='\0';i++,j++)
    {
        str1[i]=str2[j];
    }
    cout<<str1;
    return 0;

}
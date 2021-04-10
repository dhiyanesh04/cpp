#include<iostream>
using namespace std;
void swap (int *a,int *b);
void selectionsort(int arr[],int size);
int main()
{
    int c[10],n,i;
    cout<<"enter the size max size is 10";
    cin>>n;
    cout<<"enter the elements";
    for(i=0;i<n;i++)
    {
        cin>>c[i];
    }
    selectionsort (c,n);
    cout<<"sorted elements"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<c[i]<<" ";
    }
    return 0;


}
void selectionsort(int arr[],int size)
{
    int k,l;
    for(k=0;k<size-1;k++)
    { int min_index = k;
        for(l=k+1;l<size;l++)
        {
          if(arr[l]<arr[min_index])
          min_index=l;
          
        }
        swap(&arr[min_index],&arr[k]);
    }
}
void swap (int *a,int *b)
{
    int temp;
    
    temp=*a;
    *a=*b;
    *b=temp;

}


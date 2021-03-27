#include<iostream>
using namespace std;
int main()
{
    long long int a[5];
    int n=5;
    int temp;
    long long int min=0,max=0;
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]<a[j])
            {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
            }
        }
    }
    for(int i=0;i<n-1;i++)
    {
        min=min+a[i];
    }
    for(int i=1;i<n;i++)
    {
        max=max+a[i];
    }
    cout<<min<<max;
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int i,j,n;
    int temp;
    int t[10];
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<=n;i++)
    {
        t[i]=a[i];
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(t[i]<t[j])
            {
                temp=t[i];
                t[i]=t[j];
                t[j]=temp;

            }
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(t[i]==a[a[j]])
            {
                cout<<j<<endl;
            }
        }
    }
    return 0;
}
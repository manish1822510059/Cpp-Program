#include<iostream>
using namespace std;
int main()
{
    int a[10000],n;
    int d,c=0;
    int i,j,k;
    cin>>n>>d;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {  if((a[j]-a[i]==d))
        {  
            for( int k=i+1;k<n;k++)
            {
                if((a[k]-a[j]==d))
                {
                    c++;
                }
            }
        }
        }
    }
    cout<<c;
}

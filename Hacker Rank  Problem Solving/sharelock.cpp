#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int i,j,n,count,x,b,a;
    cin>>n; 
    for(i=0;i<n;i++)
    {
        cin>>a>>b;
        x=1,count=0;
        for(j=sqrt(a);j<=sqrt(b);j++)
        {
            x=j*j;
            if(x>=a&&x<=b)
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}

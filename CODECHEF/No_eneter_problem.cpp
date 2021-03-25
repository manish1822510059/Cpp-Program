#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[INT_MAX];
    for(int i=0;i<INT_MAX;i++)
    {
        cin>>a[i];
        if(a[i]==42)
        return 0;
        else
        cout<<a[i]<<endl;
    }
    
}
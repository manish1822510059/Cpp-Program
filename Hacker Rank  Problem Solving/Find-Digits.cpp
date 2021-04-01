#include<iostream>
using namespace std;
int main()
{
    int t,i,dig,p = 0;
    long long int n,x;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        x = n;
        while(n!=0){
            dig=n%10;
            if(dig!=0)
            {
                if(x%dig==0)
                p++;
            }
            n = n/10;
        }
        cout<<p<<endl;
         p=0;
    }
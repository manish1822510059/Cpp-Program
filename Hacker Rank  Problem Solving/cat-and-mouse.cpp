#include <iostream>
using namespace std;

int main()
{
    
    int q,x,y,z,i,a,b;
    cin>>q;
    for(i=0;i<q;i++)
    {
        cin>>x>>y>>z;
        a = z-x;
        b = z-y;
        if(b<0)
        b=-1*b;
        if(a<0)
        a=a*-1;
        if(a==b)
        cout<<"Mouse C\n";
        else if(a<b)
        cout<<"Cat A\n";
        else {  
        cout<<"Cat B\n";
        }
    
    }
    return 0;
    
}

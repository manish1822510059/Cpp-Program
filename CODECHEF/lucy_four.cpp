#include<iostream>
using namespace std;
int main()
{
    
int n,num,rem,p=0;
cin >> n;
for(int i=0;i<n;i++)
{
    cin>>num;  
    
    p=0;
    while(num!=0)
    {  
        rem=num%10;
        
        if(rem==4)
        {
            p++;
        }
        num=num/10;
      
    } 
    cout<<p<<endl; 
}

  
}
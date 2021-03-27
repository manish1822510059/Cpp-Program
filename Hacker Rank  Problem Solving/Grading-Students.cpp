#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 5; i <=100; i+=5)
    {    
         if(i>=a[i])
         {
           int p = i-a[i];
           cout<<p<<endl;
           if(p<3)
           {
               cout<<i;
           }
           else
           {
               cout<<a[i];
           }

         }
         
  
        
        
    }
}
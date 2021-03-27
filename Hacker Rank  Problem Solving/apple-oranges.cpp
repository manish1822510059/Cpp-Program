#include <iostream>
using namespace std;
int main()
{
    int hi, hf, ta, to,af,of, A = 0, O = 0,s=0,so=0;
    cin >> hi >> hf >> ta >> to>>af>>of ;
    long int na[1000000];
    long int mo[1000000];
    for(long int i=0;i<af;i++)
    {
       cin>>na[i]; 
    }
    
    for(long int i=0;i<of;i++)
    {
       cin>>mo[i]; 
    }


    



    for (long int i = 0; i <=af; i++)
    {
        s=ta + na[i];
        
       
     
        
        if (hi <= s && s <= hf)
        {
            A++;
        } 
       
    }
    for(long int i=0;i<of;i++)
    { so=to + mo[i];
        
         if (hi <=so && so <= hf)
        {
            O++;
        }  
    }

cout<<A<<"\n"<<O;

}

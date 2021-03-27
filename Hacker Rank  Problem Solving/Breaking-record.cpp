#include <iostream>
using namespace std;
int main()
{
    int n, min=0, max=0, i=1,minscore=0,maxscore=0;
    cin >> n;


    int a[n];
    cin>>a[0];
    

    min = a[0];
    max = a[0];

   

    while(i<n)
    {
        cin>>a[i];

        if(min>a[i])
        {
            
            
            min=a[i];
            minscore++;
        }
        if(max<a[i])
        {
            
            max=a[i];
            maxscore++;

        }

        i++;
        
    }
    cout<<maxscore<<" "<<minscore;

}
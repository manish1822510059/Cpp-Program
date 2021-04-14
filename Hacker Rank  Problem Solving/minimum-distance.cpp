#include <iostream>
using namespace std;
int main()
{
    int n,temp = 0,min=0,k;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {

            if (a[i] == a[j])
            {
                k = j - i;
                if(temp==0)
                {
                   min = k;
                   temp=1; 
                }
                if(min>k)
                {
                    min=k;
                }
            }  
        }
    }
    if(min==0)
    cout<<"-1";
    else {
    cout<<min;
    }
    return 0;
}

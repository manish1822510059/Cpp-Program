#include <iostream>
using namespace std;
int main()
{
    int n, m, d, sum = 0, p = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m >> d;
    sum = a[0];

        if(sum==m)
        {
            p++;
        }


    for (int i = 1; i < n; i++)
    {
 
        sum = sum + a[i];
        sum = a[i];

        if (sum == d)
        {
            p++;
        }

    }
    
    cout << p;
}
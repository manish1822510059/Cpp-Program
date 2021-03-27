#include <iostream>
using namespace std;
int main()
{
    int n, h[100], k, r = 0, i;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    int max = h[0];

    for (int i = 0; i < n; i++)
    {
        if (h[i] > max)
            max = h[i];
       
    }
     if (max > k)
        {
            r = max - k;
            cout << r;
        }
        else
        {
            cout << '0';
        }
    
}
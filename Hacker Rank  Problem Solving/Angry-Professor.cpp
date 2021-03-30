#include <iostream>
using namespace std;
int main()
{
    int n;
    int a[10000];
    int i, j, m = 0;
    int t, k;
    int p;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        cin >> n >> k;
        for (j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        m = 0;
        for (p = 0; p < n; p++)
        {
            if (a[p] <= 0)
            {
                m++;
            }
        }

        if (k > m)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}

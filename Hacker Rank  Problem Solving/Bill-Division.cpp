#include <iostream>
using namespace std;
int main()
{
    int n, add, charge, sum = 0, actual = 0, re = 0;
    cin >> n >> add;
    int bill[n];
    for (int i = 0; i < n; i++)
    {

        cin >> bill[i];
    }
    cin >> charge;

    for (int i = 0; i < n; i++)
    {
        if (add == i)
        {
            continue;
        }
        else if (add != i)
        {
            sum = sum + bill[i];
            actual = sum / 2;
        }
    }
    if (charge == actual)
    {
        cout << "Bon Appetit";
    }

    else
    {
        re = charge - actual;
        cout << re;
    }
    
}
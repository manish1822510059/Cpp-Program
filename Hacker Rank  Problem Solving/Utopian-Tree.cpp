#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      int j,t,height = 0;
      cin>>t;
        for (j = 0; j <=t; j++)
        {
            if ((j-1)% 2 == 0)
            {
                height *= 2;
            }
            else
            {
                height += 1;
            }

            
        }
        cout << height << endl;
    }
}


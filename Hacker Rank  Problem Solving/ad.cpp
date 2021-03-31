#include <iostream>
using namespace std;

int main()
{
    int d, l = 0, sh = 0,to=0;
    cin >> d;
    sh=5;
    for (int i = 1; i <= d; i++)
    {
        l=sh/2;
        sh = l*3;
        to=to+l;
      
    }
    cout <<to;
}
#include <iostream>
using namespace std;
int factorial(double n)
{
    if(n==0)
    {
        return 1;

    }
    double smalloutput=factorial(n-1);
    double output = n*smalloutput;
    return output;
}

int main()
{
    double n;
    cin >> n;
    double output = factorial(n);
    cout<<output<<endl;

}
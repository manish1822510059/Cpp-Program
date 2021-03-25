#include<iostream>
using namespace std;
int main(){
int number ;
int factorial = 1;
cout<<"Number:";
cin>>number;
// 1 way
// for(int i=1;i<=number;i++)
// {
//     factorial = factorial *i;
// }
for (int i = number;i>=1;i--)
{
    factorial = factorial*i;
}
cout<<number<<"! = "<<factorial;
}
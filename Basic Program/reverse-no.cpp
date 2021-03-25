#include<iostream>
using namespace std;
int main(){
int number , reversedNumber = 0;//
cout<<"Number:";
cin>>number;
while(number!=0)
{
reversedNumber *=10;
reversedNumber +=number%10;
number/=10;


}
cout<<"Received:"<<reversedNumber;'/'
}
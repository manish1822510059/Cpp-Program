#include<iostream>
using namespace std;
int main(){

int userspin = 1234 ,pin, errorCounter = 0;

do {
    cout <<"PIN:";
    cin>>pin;
    if(pin!=userspin)
        errorCounter++;
}while(errorCounter<3 && pin!=userspin);
if(errorCounter<3)
   cout<<"Your Account is Loading..." ;
else
cout<<"Pin is incorrect Account is Blocked....." ;








}
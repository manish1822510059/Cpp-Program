#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int length;
    cout<<"Length : = ";
    cin >> length;
   
    char symbol;
    cout<<"Symbol : = ";
    cin>>symbol;
    for(int i = 1;i<=length;i++)
    {
        for(int w = 1;w<=i;w++){
        cout<<setw(3)<<symbol;
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    for(int i = length;i>=1;i--)
    {
        for(int w = 1;w<=i;w++){
        cout<<setw(3)<<symbol;
        }
        cout<<endl;
    }
    



}